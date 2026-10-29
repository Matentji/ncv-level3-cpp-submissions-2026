
#include <iostream>
using namespace std;

// Function prototypes
void getNumbers(double &num1, double &num2);

double calcSum(double num1, double num2);
double calcDifference(double num1, double num2);
double calcProduct(double num1, double num2);
double calcQuotient(double num1, double num2);

int main()
{
    double num1, num2;

    // Get two numbers
    getNumbers(num1, num2);

    // Display the returned sum
    cout << "Sum: " << calcSum(num1, num2) << endl;

    // Display the returned difference
    cout << "Difference: "
         << calcDifference(num1, num2) << endl;

    // Display the returned product
    cout << "Product: " << calcProduct(num1, num2) << endl;

    // Check before displaying the quotient
    if (num2 != 0)
    {
        cout << "Quotient: "
             << calcQuotient(num1, num2) << endl;
    }
    else
    {
        cout << "Error: Division by zero is not allowed."
             << endl;
    }

    return 0;
}

// Function to get two numbers
void getNumbers(double &num1, double &num2)
{
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;
}

// Function to calculate and return the sum
double calcSum(double num1, double num2)
{
    return num1 + num2;
}

// Function to calculate and return the difference
double calcDifference(double num1, double num2)
{
    return num1 - num2;
}

// Function to calculate and return the product
double calcProduct(double num1, double num2)
{
    return num1 * num2;
}

// Function to calculate and return the quotient
double calcQuotient(double num1, double num2)
{
    return num1 / num2;
}
