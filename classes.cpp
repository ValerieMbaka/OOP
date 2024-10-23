#include <iostream>

using namespace std;

// Start of class definition
class Employee
{
    private:
        string name, gender;
        int yob, yoe;

    public:
        void setDetails();
        void getDetails();
        string getName();
        void setName();
        int getYoE();
};
// End of class definition

// Class implementation
void Employee :: setDetails()
{
    cout << "Enter name of the employee: \n";
    cin >> name;
    cout << "Enter Year of Birth for "<< name << endl;
    cin >> yob;
    cout << "What is the gender of "<< name << " ? \n";
    cin >> gender;
    cout << "When was "<< name << " employed ?\n";
    cin >> yoe;
    cout << "Employee details captured successfully\n";
}

void Employee :: getDetails()
{
    cout << "Employee Details \n";
    cout << "Name: "<< name << endl;
    cout << "Gender: "<< gender << endl;
    cout << "Year of Birth: "<< yob << endl;
    cout << "Year Employed: "<< yoe << endl;
}

string Employee :: getName()
{
    return name;
}

int Employee :: getYoE()
{
    return yoe;
}

void Employee :: setName()
{
    cout << "Current name is: "<< name << ".\nEnter new name: \n";
    cin >> name;
    cout << "Name changed successfully. \n";
}

int main()
{
    cout << "Creating a new employee \n";
    // Objects
    Employee employee1, employee2;
    // Method call
    employee1.setDetails();
    employee2.setDetails();
    employee1.getDetails();
    employee2.getDetails();
    employee1.setName();
    cout << "Employee 1 is now called "<< employee1.getName() << endl;
    cout << "Employee 1 was employed in "<< employee1.getYoE() << endl;
    return 0;
}
