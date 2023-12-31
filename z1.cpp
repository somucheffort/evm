#include <iostream>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(0, "");
    float m, z1, z2, sqM;

    cout << "������� m: ";
    cin >> m;

    if (m < 0) {
        cout << "��������� ����� ������ ����." << endl;
        return -1;
    }

    // ���������� ����� �� m
    sqM = sqrt(m);
    // z2
    z2 = -1 * sqM;

    if (sqM == 0) {
        cout << "z2: " << z2 << endl;
        cout << "�������� ����� ����� ����." << endl;
        return -1;
    }

    // ����������� z1
    float z1Denom = (3 * sqM) - (2 / sqM);

    if (z1Denom == 0) {
        cout << "z2: " << z2 << endl;
        cout << "����������� ����� ����." << endl;
        return -1;
    }

    // ��������� z1 �� �����
    float z1NumPreSqrt = ((3 * m + 2) * (3 * m + 2)) - (24 * m);

    if (z1NumPreSqrt < 0) {
        cout << "z2: " << z2 << endl;
        cout << "��������� ��������� ��� ������ ������ ����." << endl;
        return -1;
    }

    z1 = sqrt(z1NumPreSqrt) / z1Denom;

    cout << "z1: " << z1 << endl;
    cout << "z2: " << z2 << endl;
    return 0;
}