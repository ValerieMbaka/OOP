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
                        getline(cin, inputText);
                        myfile << inputText << "\n";
                        myfile.close();

                        // Reading from the file
                        ifstream mytext("Textfile.txt");
                        // mytext >> inputText;
                        getline(mytext, inputText);
                        mytext.close();
                        // if (mytext.is_open()) {
                        //         string text = getline();
                        // }
                        // cout << text << endl;
                        // mytext.close();

                };
};

int main() {
        FileIO file;

        return 0;
}