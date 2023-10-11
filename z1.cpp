#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

int main() {
    float m, z1, z2, sqM;

    cout << "Введите m: ";
    cin >> m;

    if (m < 0) {
        cout << "Введенное число меньше нуля." << endl;
        return -1;
    }

    // сохранение корня из m
    sqM = sqrt(m);
    // z2
    z2 = -1 * sqM;

    // знаменатель z1
    float z1Denom = (3 * sqM) - (2 / sqM);

    if (z1Denom == 0) {
        cout << "Знаменатель равен нулю." << endl;
        return -1;
    }

    // числитель z1 до корня
    float z1NumPreSqrt = ((3 * m + 2) * (3 * m + 2)) - (24 * m);

    if (z1NumPreSqrt < 0) {
        cout << "Выражение числителя под корнем меньше нуля." << endl;
        return -1;
    }

    z1 = sqrt(z1NumPreSqrt) / z1Denom;

    cout << "z1: " << z1 << endl;
    cout << "z2: " << z2 << endl;
    return 0;
}