#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex c1(2, 3);
    Complex c2(1, 4);

    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    Complex c5 = c1 * c2;
    Complex c6 = c1 / c2;

    cout << "c1: " << c1 << endl;
    cout << "c2: " << c2 << endl;
    cout << "c1 + c2 = " << c3 << endl;
    cout << "c1 - c2 = " << c4 << endl;
    cout << "c1 * c2 = " << c5 << endl;
    cout << "c1 / c2 = " << c6 << endl;

    cout << "c1 == c2? " << (c1 == c2) << endl;
    cout << "c1 != c2? " << (c1 != c2) << endl;

    //  Assignment
    Complex c7;
    c7 = c1;
    cout << "c7 after assignment = " << c7 << endl;

    return 0;
}
