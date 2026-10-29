
#include <iostream>
using namespace std;

int main()
{
    int number1, number2;

    // Input
    cout << "Enter the first number: ";
    cin >> number1;

    cout << "Enter the second number: ";
    cin >> number2;

    // Processing and Output
    if (number1 % 2 == 0)
    {
        cout << number1 << " is an even number." << endl;
    }
    else
    {
        cout << number1 << " is an odd number." << endl;
    }

    if (number2 % 2 == 0)
    {
        cout << number2 << " is an even number." << endl;
    }
    else
    {
        cout << number2 << " is an odd number." << endl;
    }

    return 0;
}
