#include <iostream>

using namespace std;

void withdraw();
void getPin()
{
    int pin, attempts = 0, maxAttempts = 3;

    do
    {
        cout << "Enter your pin: \n";
        cin >> pin;

        if(pin == 1234)
        {
            withdraw();
            return;
        }
        else
        {
            attempts++;
            if (attempts < maxAttempts)
            {
                cout << "Incorrect PIN. You have " << (maxAttempts - attempts) << " attempts remaining.\n";
            }
        }
    } while (attempts < maxAttempts);

    cout << "Your identity could not be ascertained \n";
}

void withdraw()
{
    int amount, balance = 10000;
    string answer;
    cout << "Your current account balance is: " << balance << "\n";
    cout << "Enter amount you wish to withdraw: \n";
    cin >> amount;
    if(amount <= balance)
    {
        cout << "Successful withdrawal. \n";
        int newBalance = balance - amount;
        cout << "Your new account balance is: " << newBalance << "\n";
        cout << "Would you like to perform another operation? \n";
        cin >> answer;
        if(answer == "yes" || answer == "YES")
        {
            withdraw();
        }

    }
    else
    {
        cout << "Insufficient funds! Try a lesser amount \n";
        withdraw();
    }
}

int main()
{
    getPin();
    return 0;
}
