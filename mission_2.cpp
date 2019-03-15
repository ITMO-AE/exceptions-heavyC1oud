#include <iostream>
#include "rational.h"

using namespace std;

int main() {
    try {
        Rational r(1, 0);
        cout << "Doesn't throw in case of zero denominator" << endl;
        return 1;
    } catch (invalid_argument &e) {
        cout << e.what() << endl;
    }

    try {
        auto x = Rational(1, 2) / Rational(0, 1);
        cout << "Doesn't throw in case of division by zero" << endl;
        return 2;
    } catch (domain_error &e) {
        cout << e.what() << endl;
    }

    cout << "OK" << endl;
    return 0;
}