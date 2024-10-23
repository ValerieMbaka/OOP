// C++ code Demo
// Control structures
#include <iostream>

using namespace std;

int main()
{
    string name;
    int yob, cyr, age, yearsLeft, score;
    cout << "Enter your name: "<< endl;
    cin >> name;
    cout << name << " when were you born? " << endl;
    cin >> yob;
    cout << "Enter current year \n";
    cin >> cyr;
    age = cyr - yob;
    cout << name << " you are " << age << " years old \n";
    if (age >= 18)
    {
        cout << name << " you are eligible to vote \n";
    }
    else
    {
        yearsLeft = 18 - age;
        cout << name << " you are not eligible to vote \n. You need to wait for " << yearsLeft << " years \n";
    }
    cout << name << " what did you score in OOP I? \n";
    cin >> score;
    if(score < 0 || score > 100)
    {
        cout << "Invalid marks \n";
    }
    else if (score >= 70)
    {
        cout << " Pass, A \n";
    }
    else if (score >= 60)
    {
        cout <<" Pass, B \n";
    }
    else if (score >= 50)
    {
        cout << " Pass, C \n";
    }
    else if (score >= 40)
    {
        cout << " Pass, D \n";
    }
    else
    {
        cout << " Failed \n";
    }

    string name;
    char grade;
    cout << "Enter your name: "<< endl;
    cin >> name;
    cout << name << " what grade did you get in OOP I? \n";
    cin >> grade;

    switch (grade)
    {
    case 'a':
    case 'A':
        cout << "Excellent Performance \n";
        break;
    case 'b':
    case 'B':
        cout << "Above Average Performance \n";
        break;
    case 'c':
    case 'C':
        cout << "Average Performance \n";
        break;
    case 'd':
    case 'D':
        cout << "Below Average Performance \n";
        break;
    case 'e':
    case 'E':
        cout << "Retake The Unit \n";
        break;
    default:
        cout << "Invalid Grade \n";
    }

    // Exercise Two - Loops
    int num, square;
    do
    {
        cout << "Enter a number range 1-100 \n";
        cin >> num;
        if (num >= 1 && num <= 100)
        {
            square = num*num;
            cout << "The square of "<< num << " is "<< square << endl;
        }
        else
        {
            cout << "The value is out of range \n Try another\n";
            square = 0;
        }
    } while (square < 10000);
    cout << "End of exercise 2\n";

    // Exercise 3
    int num1, num2, num3, sum;
    cout << "Enter the first number: \n";
    cin >> num1;
    cout << "Enter the second number: \n";
    cin >> num2;
    sum = num1 + num2;
    cout << "The sum is "<< sum << endl;
    while (sum < 1000)
    {
        cout << "Enter another number: \n";
        cin >> num3;
        // sum += num3;
        sum = sum + num3;
        cout << "The new sum is "<< sum << endl;
    }
    cout << "End of Exercise 3\n";

    int x, y;
    cin >> x;
    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            cout << y << "";
        }
        cout << endl;
    }

    for (x = 1; x <= 5; x++)
    {
        for (y = 1; y <= 5; y++)
        {
            cout << x << "";
        }
        cout << endl;
    }

    for (x = 1; x <= 5; x++)
    {
        for (int y = 1; y <= x; y++)
        {
            cout << x << "";
        }
        cout << endl;
    }

    return 0;
}
