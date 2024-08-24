#include <iostream>

using namespace std;

int main() {
	
    int choice;

    do {
        cout << "--------------------------\n";
        cout <<        "MAIN MENU\n";
        cout << "--------------------------\n";
        cout << "1. To Display List of Files\n";
        cout << "2. To Create New Directory\n";
        cout << "3. To Change the Working Directory\n";
        cout << "4. Exit\n";
        cout << "Enter the Number: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Displaying list of files...\n";
        } else if (choice == 2) {
            cout << "Creating new directory...\n";
        } else if (choice == 3) {
            cout << "Changing working directory...\n";
        } else if (choice == 4) {
            cout << "Exit.\n";
        } else {
            cout << "Invalid Choice. Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}
