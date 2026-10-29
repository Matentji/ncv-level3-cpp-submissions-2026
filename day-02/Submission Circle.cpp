#include <iostream>
using namespace std;

int main() {
    //Declaration
    float radius, perimeter;
    const float PI = 3.14159;

    //Input
    cout << "Enter the radius of the circle: ";
    cin >> radius;

    //Calculation of parameter of circle
    perimeter = 2 * PI * radius;

    //Display results
    cout << "Perimeter of the circle = " << perimeter << endl;

    return 0;
}
