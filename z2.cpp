#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(0, "");
    float x, y;
    cout << "������� x: ";
    cin >> x;
    cout << "������� y: ";
    cin >> y;

    int triTopRight = (x >= 0) && (x <= 6) && (y <= (-1 * x + 6)) && (y >= 0);
    int triDownLeft = (x >= -6) && (x <= 0) && (y <= 0) && (y >= (-1 * x - 6));
    int square = (x >= 0) && (x <= 6) && (y <= 0) && (y >= -6);
    int circleTiny = (x - 2) * (x - 2) + (y + 3) * (y + 3) <= 4;
    int circleLarge = (x - 4) * (x - 4) + (y + 4) * (y + 4) <= 9;

    int triSquareSum = triTopRight || triDownLeft || square;
    int symDifCircles = (circleTiny && !circleLarge) || (circleLarge && !circleTiny);

    int symDifSumCircles = (triSquareSum && !symDifCircles) || (!triSquareSum && symDifCircles);

    if (symDifSumCircles) cout << "����� ������";
    else cout << "����� �� ������";

    cout << endl;

    return 0;
}