#include <iostream>

using namespace std;

void showFileListMenu();

int main() {
    int choice;

    do {
        cout << "--------------------\n";
        cout << "MAIN MENU\n";
        cout << "--------------------\n";
        cout << "1. To Display List of Files\n";
        cout << "2. To Create New Directory\n";
        cout << "3. To Change the Working Directory\n";
        cout << "4. Exit\n";
        cout << "Enter the Number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showFileListMenu(); 
                break;
            case 2:
                cout << "Creating new directory...\n";
                break;
            case 3:
                cout << "Changing working directory...\n";
                break;
            case 4:
                cout << "Press any key to exit.\n";
                break;
            default:
                cout << "Invalid Choice. Please try again.\n";
                break;
        }

    } while (choice != 4);

    return 0; 
}


void showFileListMenu() {
    int fileChoice;

    do {
        cout << "LIST FILE DETAIL\n"; 
        cout << "------------------\n";
        cout << "1. List All Files\n";
        cout << "2. List of Extension Files\n";
        cout << "3. List by Name Wise\n"; 
        cout << "Enter the Number: ";
        cin >> fileChoice;

        switch (fileChoice) {
            case 1:
                cout << "Listing all files...\n";
                break;
            case 2:
                cout << "Listing files by extension...\n";
                break;
            case 3:
                cout << "Listing files by name...\n";
                break;
            default:
                cout << "Invalid Choice. Please try again.\n";
                break;
        }

    } while (fileChoice != 3);
    
}
