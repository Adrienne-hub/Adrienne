#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

void showDirectoryMenu();
void changeDirectoryMenu();
void createDirectory();

int main() {
    int choice;

    do {
        cout << "\n----------------\n"
             << "    MAIN MENU    \n"
             << "----------------\n"
             << "1. Display List of Files\n"
             << "2. Create New Directory\n"
             << "3. Change Working Directory\n"
             << "4. Exit\n"
             << "Enter the number: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showDirectoryMenu();
                break;
            case 2:
                createDirectory();
                break;
            case 3:
                changeDirectoryMenu();
                break;
            case 4:
                cout << "Exiting the program...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}

void showDirectoryMenu() {
    int dirChoice;
    cout << "\n---------------------\n"
         << "   LIST FILE DETAIL   \n"
         << "---------------------\n"
         << "1. List all Files\n"
         << "2. List by Extension\n"
         << "3. List by Name\n"
         << "Enter the number: ";
    cin >> dirChoice;

    if (dirChoice == 1) {
        system("dir /a-d");
    } else if (dirChoice == 2) {
        string extension;
        cout << "Enter the file extension (e.g., .txt): ";
        cin >> extension;
        system(("dir /a-d *" + extension).c_str());
    } else if (dirChoice == 3) {
        string pattern;
        cout << "Enter the pattern (e.g., *.txt): ";
        cin >> pattern;
        system(("dir /a-d " + pattern).c_str());
    } else {
        cout << "Invalid choice.\n";
    }
}

void changeDirectoryMenu() {
    int changeDirChoice;
    cout << "\n----------------------\n"
         << "   CHANGE DIRECTORY MENU   \n"
         << "----------------------\n"
         << "1. Move to Parent Directory\n"
         << "2. Move to Root Directory\n"
         << "3. Move to Specific Directory\n"
         << "Enter the number: ";
    cin >> changeDirChoice;

    if (changeDirChoice == 1) {
        system("cd ..");
    } else if (changeDirChoice == 2) {
        system("cd \\");
    } else if (changeDirChoice == 3) {
        string directory;
        cout << "Enter the directory path: ";
        cin.ignore();  
        getline(cin, directory);
        if (system(("cd \"" + directory + "\"").c_str()) == 0) {
            cout << "Successfully moved to: " << directory << endl;
        } else {
            cout << "Failed to move to: " << directory << endl;
        }
    } else {
        cout << "Invalid choice.\n";
    }
}

void createDirectory() {
    string directoryName;
    cout << "Enter the name of the new directory: ";
    cin.ignore();  
    getline(cin, directoryName);

    if (system(("mkdir \"" + directoryName + "\"").c_str()) == 0) {
        cout << "Directory created: " << directoryName << endl;
    } else {
        cout << "Failed to create directory.\n";
    }
}
