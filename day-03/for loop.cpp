
#include <iostream>
using namespace std;

int main() {

    double num, sum = 0, average;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        sum = sum + num;
    }

    average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
