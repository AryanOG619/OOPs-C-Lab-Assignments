#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

int main() {

    // -------------------- LIST CONTAINER --------------------

    // Create a list to store event participants
    list<string> participants;

    // Insert participants at the back of the list
    participants.push_back("Aditi");
    participants.push_back("Rahul");
    participants.push_back("Sana");

    // Insert a participant at the front of the list
    participants.push_front("Karan");

    // Remove the participant named Rahul
    participants.remove("Rahul");

    cout << "Event participants (list):" << endl;

    // Traverse the list and display each participant
    for (const string& name : participants) {
        cout << name << endl;
    }

    // Display the total number of participants
    cout << "Total participants: "
         << participants.size() << endl;


    // -------------------- VECTOR CONTAINER --------------------

    // Create a vector to store event activities
    vector<string> activities;

    // Add activities at the end of the vector
    activities.push_back("Registration");
    activities.push_back("Workshop");
    activities.push_back("Seminar");

    // Insert an activity at the beginning of the vector
    activities.insert(activities.begin(), "Inauguration");

    // Remove the second activity (Workshop) using its index
    activities.erase(activities.begin() + 2);

    cout << "\nEvent activities (vector):" << endl;

    // Traverse the vector and display each activity
    for (const string& activity : activities) {
        cout << activity << endl;
    }

    // Display the total number of activities
    cout << "Total activities: "
         << activities.size() << endl;

    return 0;
}