#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;
using std::to_string;

int main() {
    setlocale(0, "");
    double x, eps, S, num, d1, d2 = 1;

    cout << "¬ведите x: ";
    cin >> x;

    if (x <= 0) {
        cout << "„исло x не больше нул€." << endl;
        return -1;
    }

    cout << "¬ведите точность: ";
    cin >> eps;

    num = (x - 1);
    d1 = (x + 1);

    S = 2 * (num / d1);

    while(fabs(num / (d2 * d1)) > eps) {
        num *= (x - 1) * (x - 1);
        d1 *= (x + 1) * (x + 1);
        d2 += 2;
        S += 2 * (num / (d2 * d1));

        printf("num: %f / S: %f / %f\n", num / (d2 * d1), S, log1p(x - 1));
    }
}