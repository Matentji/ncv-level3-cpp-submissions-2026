
#include <iostream>
using namespace std;

// Function prototypes
void getNumbers(double &num1, double &num2);
void calcSum(double num1, double num2);
void calcDifference(double num1, double num2);
void calcProduct(double num1, double num2);
void calcQuotient(double num1, double num2);

int main()
{
    double num1, num2;

    // Call function to get two numbers
    getNumbers(num1, num2);

    // Call function to calculate and display the sum
    calcSum(num1, num2);

    // Call function to calculate and display the difference
    calcDifference(num1, num2);

    // Call function to calculate and display the product
    calcProduct(num1, num2);

    // Call function to calculate and display the quotient
    calcQuotient(num1, num2);

    return 0;
}

// Function to prompt the user for two numbers
void getNumbers(double &num1, double &num2)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

// Function to calculate and display the sum
void calcSum(double num1, double num2)
{
    cout << "Sum: " << num1 + num2 << endl;
}

// Function to calculate and display the difference
void calcDifference(double num1, double num2)
{
    cout << "Difference: " << num1 - num2 << endl;
}

// Function to calculate and display the product
void calcProduct(double num1, double num2)
{
    cout << "Product: " << num1 * num2 << endl;
}

// Function to calculate and display the quotient
void calcQuotient(double num1, double num2)
{
    if (num2 != 0)
    {
        cout << "Quotient: " << num1 / num2 << endl;
    }
    else
    {
        cout << "Error: Division by zero is not allowed."
             << endl;
    }
}
