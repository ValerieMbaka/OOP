// File input and output
#include <iostream>
#include <fstream>
using namespace std;

class FileIO {
        public:
                FileIO() {
                        // Writing into a file
                        ofstream myfile("Textfile.txt", ios::app);
                        myfile << "C++ file I/O is working\n";
                        string inputText;
                        cout << "Type a  sentence: \n";
                        // cin >> inputText;
                        getline(cin, inputText); // Use getline for multi-word input
                        myfile << inputText << "\n";
                        myfile.close();

                        // mytext >> inputText;
                        // getline(mytext, inputText);
                        // mytext.close();
                        // if (mytext.is_open()) {
                        //         string text = getline();
                        // }
                        // cout << text << endl;
                        // mytext.close();

                };

                // Method to read from the file
                void readFile() {
                        ifstream mytext("Textfile.txt"); // Open file for reading
                        if (!mytext.is_open()) { // Check if the file is open
                                // Use cerr to output an error message
                                cerr << "Error: Unable to open file for reading!" << endl;
                                return;
                        }

                        string text;
                        cout << "\nContents of the file:\n";
                        while (getline(mytext, text)) {
                                cout << text << endl; // Print each line
                        }
                        mytext.close(); // Close the file
                };

                // Method to clear the file contents with a confirmation prompt
                void clearFile() {
                        char confirm;
                        cout << "Are you sure you want to clear the file contents? (y/n): ";
                        cin >> confirm;

                        // Check if user confirmed with 'y' or 'Y'
                        if (confirm == 'y' || confirm == 'Y') {
                                ofstream myfile("Textfile.txt", ios::trunc); // Open file in trunc mode to clear contents
                                if (!myfile.is_open()) {
                                        cerr << "Error: Unable to open file for clearing!" << endl;
                                        return;
                                }
                                cout << "File contents have been cleared.\n";
                                myfile.close(); // Close the file
                        } else {
                                cout << "File contents were not cleared.\n";
                        }
                };
};

int main() {
        FileIO file;
        // Call the readFile method to display file content
        file.readFile();

        // Ask user for confirmation to clear the file contents
        file.clearFile();

        // Confirm the file is empty after the operation
        cout << "\nAfter clearing the file:\n";
        file.readFile();
        return 0;
}