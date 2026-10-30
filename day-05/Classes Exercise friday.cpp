
#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;
    char gender;

public:
    Person();  // default constructor

    Person(string nm, int ag, char gn); // parameterised constructor

    void setPerson(string nm, int ag, char gn); // setter

    string getName();
    int getAge();
    char getGender();
};

// Default constructor
Person::Person()
{
    name = "";
    age = 0;
    gender = ' ';
}

// Parameterised constructor
Person::Person(string nm, int ag, char gn)
{
    setPerson(nm, ag, gn);
}

// Setter method
void Person::setPerson(string nm, int ag, char gn)
{
    name = nm;

    if (ag >= 0 && ag <= 120)
        age = ag;
    else
        age = 0;

    gender = gn;
}

// Getter methods
string Person::getName()
{
    return name;
}

int Person::getAge()
{
    return age;
}

char Person::getGender()
{
    return gender;
}

// Main program
int main()
{
    Person p1;  // default constructor runs

    p1.setPerson("Thato", 23, 'M');

    Person p2("Lerato", 19, 'F'); // parameterised constructor runs

    cout << p1.getName() << ", "
         << p1.getAge() << ", "
         << p1.getGender() << endl;

    cout << p2.getName() << ", "
         << p2.getAge() << ", "
         << p2.getGender() << endl;

    p2.setPerson("Lerato", 200, 'F'); // invalid age is rejected

    cout << p2.getName() << ", "
         << p2.getAge() << endl;

    return 0;
}
