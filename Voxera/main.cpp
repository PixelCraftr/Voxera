#include <iostream>
#include "window.h" // Include the window functionality

using namespace std;

int main() {
    char userChoice;

    // Initialize the window
    initializeWindow();

    while (true) {
        cout << "Program Running... Type 'q' to quit or 'w' to handle window events: ";
        cin >> userChoice;

        if (userChoice == 'q' || userChoice == 'Q') {
            cout << "Exiting Program." << endl;
            break; // Stops the loop
        } else if (userChoice == 'w' || userChoice == 'W') {
            handleWindowEvents(); // Handle window-related events
        } else {
            cout << "Unknown input. Try again." << endl;
        }
    }

    // Destroy the window before exiting
    destroyWindow();

    return 0;
}
