#include <iostream>
using namespace std;

int f1(int x) {
    x = x + 5;
    return x * 2;
}

void f2(int& x) {
    x = x + 5;
}

void f3(int x) {
    x = 100;
}

int square(int n) {
    return n * n;
}

int main() {
    // Question 1
    int a = 3;
    int b = f1(a);
    cout <<"Question one"<< " " <<  a << " " << b << endl;

    // Question 2
    int c = 3;
    f2(c);
    cout << "Question two"<< " " << c << endl;

    // Question 3
    int d = 7;
    f3(d);
    cout<< "Question three"<< " " <<d << endl;

    // Question 4
    cout << "Question four"<< " " <<square(square(2)) << endl;

    // Question 5
    cout << "Question five"<< " " << square(3) + square(4) << endl;

    return 0;
}
