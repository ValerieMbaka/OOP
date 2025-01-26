#include <iostream>
using namespace  std;

void verifyPin();
void withdraw();

int main() {
        cout << "Welcome to the Bank System! \n";

        verifyPin();

        return 0;
}

void verifyPin() {
        int pin = 1234, enteredPin, attempts = 0, maxAttempts = 3;

        while (attempts < maxAttempts) {
                cout << "Enter your PIN: \n";
                cin >> enteredPin;

                if (enteredPin == pin) {
                        withdraw();
                        return;
                }

                attempts++;
                cout << "Incorrect PIN! You have " <<maxAttempts - attempts << " attempts remaining.\n";
        }

        cout << "Your identity could not be ascertained!! \n";
}

void withdraw() {
        double balance = 10000.00, amount;
        string answer;

        do {
                cout << "Enter amount you wish to withdraw: \n";
                cin >> amount;

                if (amount <= balance) {
                        balance -= amount;
                        cout << "Withdrawal successful! Your new balance is Ksh. " << balance << "\n";

                        cout << "Do you wish to perform another operation? \n";
                        cin >> answer;

                } else {
                        cout << "Insufficient funds!! Please try a lesser amount \n";
                        answer = "yes";
                }

        } while (answer == "Yes" || answer == "YES" || answer == "yes");

        cout << "Thank you for using our system. \n";
}