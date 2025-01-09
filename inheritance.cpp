#include <iostream>

using namespace std;

class Person {
        protected:
                string name, gender;
                int yob;

        public:
                Person();
                // Parameterised Constructor
                Person(string n, string g, int y) {
                    name = n;
                    gender = g;
                    yob = y;
                };
                void setName();
                void setYob();
                void setGender();
                string getName() {
                        return name;
                };
                int getYob() {
                        return yob;
                };
                string getGender() {
                        return gender;
                };
                void details();

};

class Student : public Person {
private:
    string regNo;
    double feeBalance;

public:
    Student();
    Student(string nm, string gen, int yr, string reg, double fb) {
        name = nm;
        gender = gen;
        yob = yr;
        regNo = reg;
        feeBalance = fb;
    };
    void setRegNo();
    void payFee();
    string getRegNo() {
        return regNo;
    }
    double checkFeeBalance() {
        return feeBalance;
    };
    void viewDetails();

};

Person::Person() {
    cout << "Enter name of the person : \n";
    cin >> name;
    cout << "Enter gender : \n";
    cin >> gender;
    cout << "Enter Year of Birth : \n";
    cin >> yob;
}

void Person::setName() {
    cout << "Enter new name for " << name << " : \n";
    cin >> name;
}

void Person::setYob() {
    cout << "Enter new Year of Birth for " << name << " : \n";
    cin >> yob;
}

void Person::setGender() {
    cout << "Enter new gender for " << name << " : \n";
    cin >> gender;
}

void Person::details() {
    cout << "Name : " << name << endl;
    cout << "Year of Birth : " << yob << endl;
    cout << "Gender : " << gender << endl;
}

Student::Student() {
    cout << "Enter student Registration Number : \n";
    cin >> regNo;
    cout << "Enter amount payable by the Student : \n";
    cin >> feeBalance;
}

void Student::setRegNo() {
    cout << "Registration Number for " << name << " is " << regNo << " .Enter new Registration Number : \n" << endl;
    cin >> regNo;
}

void Student::payFee() {
    double amount;
    cout << name << " Enter amount you want to pay : \n";
    cin >> amount;
    feeBalance = feeBalance - amount;
    cout << "Your new fee balance is : " << checkFeeBalance() << endl;
}

void Student::viewDetails() {
    cout << "\n Student Details. \n";
    cout << "Name : " << name << endl;
    cout << "Year of Birth : " << yob << endl;
    cout << "Gender : " << gender << endl;
    cout << "Fee Balance : " << feeBalance << endl;
    cout << "Registration number : " << regNo << endl;
}

int main()
{
    cout << "Creating a Person \n";
    Person P1, P2("John", "Male", 2004);
    cout << "\n Creating a Student \n";
    Student S1, S2("Jane", "Female", 2005, "CIT-227-033/2023", 25000);
    S1.setName();
    S1.payFee();
    S1.viewDetails();
    cout <<"Your Fee Balance is: " << S1.checkFeeBalance() << endl;

    return 0;
}
