
#include <iostream>
#include <string>

using namespace std;

int main() {

    //declaration
    string name = "";
    char gender;

    //Enter your details
    cout << "What is your name?:" << endl;
    getline(cin >> ws, name);

    cout << "What is your Gender (M/F)?:" << endl;
    cin >> gender;

    //Switch statement for gender

    switch (gender) {
        case 'M':
        case 'm':
            cout << "Hello " << name << endl;
            cout << "You are Male" << endl;
            break;

        case 'F':
        case 'f':
            cout << "Hello " << name << endl;
            cout << "You are Female" << endl;
            break;

        default:
            cout << "Invalid gender entered" << endl;
    }

    return 0;
}
