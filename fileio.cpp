#include <iostream>
#include <fstream>

using namespace std;

class User {
        private:
                string username;
                int pin;

        public:
                User() {
                        cout << "Enter username: \n";
                        getline(cin, username);
                        cout << "Enter PIN: \n";
                        cin >> pin;
                }

                void saveDetails() {
                        ofstream file("usersLog.txt", ios::app);
                        file << "Username: " << username << ", PIN: " << pin << endl;
                        file.close();
                }
};

int main() {
        User user;
        user.saveDetails();
        return 0;
}