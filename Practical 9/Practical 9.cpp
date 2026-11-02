#include <iostream>
#include <memory>
#include <string>
#include <utility>
using namespace std;

// Class to manage media resource information
class MediaResource {
    string title;
    unique_ptr<int> handle;

public:
    // Constructor to initialize title and dynamically allocate resource ID
    MediaResource(string t, int id)
        : title(move(t)), handle(make_unique<int>(id)) {}

    // Move constructor to transfer ownership from another object
    MediaResource(MediaResource&& other) noexcept
        : title(move(other.title)), handle(move(other.handle)) {}

    // Deleting copy constructor to prevent copying of objects
    MediaResource(const MediaResource&) = delete;

    // Deleting copy assignment operator to prevent copy assignment
    MediaResource& operator=(const MediaResource&) = delete;

    // Function to display media resource details
    void show() const {
        cout << "Title: " << title << endl;

        // Check whether the resource handle is available
        if (handle)
            cout << "Resource ID: " << *handle << endl;
        else
            cout << "Resource ownership: transferred" << endl;
    }
};

// Main function: program execution starts here
int main() {

    // Creating the source object with title and resource ID
    MediaResource source("Nature Documentary", 204);

    // Displaying source object details before moving
    cout << "Before move:" << endl;
    source.show();

    // Transferring ownership from source object to destination object
    MediaResource destination(move(source));

    // Displaying destination object details after the move
    cout << "\nAfter move - destination:" << endl;
    destination.show();

    // Displaying source object after ownership transfer
    cout << "After move - source:" << endl;
    source.show();

    return 0;
}