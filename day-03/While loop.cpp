#include <iostream>
using namespace std;

int main() {
    double num, sum = 0, average;
    int i = 1;

    while (i <= 5) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        sum = sum + num;

        i++;
    }

    average = sum / 5;

    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;

    return 0;
}
