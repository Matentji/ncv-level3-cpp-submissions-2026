#include <iostream>
using namespace std;

int main() {
    double num, sum = 0, average;
    int choice;

    for (int i = 1; i <= 5; i++) {
        cout << "Enter number " << i << ": ";
        cin >> num;

        sum = sum + num;
    }

    cout << "\n1. Display Sum" << endl;
    cout << "2. Display Average" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Sum: " << sum << endl;
            break;

        case 2:
            average = sum / 5;
            cout << "Average: " << average << endl;
            break;

        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
