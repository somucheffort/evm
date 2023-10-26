#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(0, "");
    float S, d, a;
    int n;

    cout << "¬ведите n (n > 0): ";
    cin >> n;

    if (n <= 0) {
        cout << "„исло n не больше 0" << endl;
        return -1;
    }

    cout << "¬ведите a: ";
    cin >> a;
    d = a;

    S = 1 / d;

    for (int i = 1; i < n; i++) {
        d *= a * a;
        S += 1 / d;
    }


    cout << S << endl;
}