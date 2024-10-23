// Functions and Prototyping
#include <iostream>

using namespace std;

void menu();
int main()
{
    menu();

    return 0;
}

void square()
{
    int size;
    char pattern;
    cout <<"Enter the character you want to use for the pattern: "<< endl;
    cin >> pattern;
    cout <<"Enter the number of characters to be used in the pattern: "<< endl;
    cin >> size;

    for(int x =1; x <= size; x++)
    {
        for(int y =1; y <= size; y++)
        {
            cout << pattern;
        }
        cout << endl;
    }

    menu();
}

void triangle()
{
    int size;
    char pattern;
    cout <<"Enter the character you want to use for the pattern: "<< endl;
    cin >> pattern;
    cout <<"Enter the number of characters to be used in the pattern: "<< endl;
    cin >> size;

    for (int a = 1; a <= size; a++)
    {
        for (int b = 1; b <= a; b++)
        {
            cout << pattern << " ";
        }
        cout << endl;
    }

    menu();

}

void invertedTriangle()
{
    int size;
    char pattern;
    cout <<"Enter the character you want to use for the pattern: "<< endl;
    cin >> pattern;
    cout <<"Enter the number of characters to be used in the pattern: "<< endl;
    cin >> size;

    for (int i = size; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << pattern << " ";
        }
        cout << endl;
    }

    menu();
}

void exit()
{
    string answer;
    cout << "Are you sure you want to exit? \n";
    cout << "Yes or No\n";
    cin >> answer;

    if(answer == "NO" || answer == "no" || answer == "No" || answer == "nO")
    {
        menu();
    }
    else
    {
        cout << "Thank you for using this program \n";
    }
}

void menu()
{
    int num;
    cout << "Choose the type of pattern you want from the menu below: \n";
    cout << "1. Square\n2. Triangle\n3. Inverted Triangle\n4. Exit\n";
    cin >> num;

    switch (num)
    {
        case 1:
            square();
            break;
        case 2:
            triangle();
            break;
        case 3:
            invertedTriangle();
            break;
        case 4:
            exit();
            break;
        default:
            cout << "Enter a valid option from the list provided";
            menu();
    }
}
