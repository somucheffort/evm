#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(0, "");
    float F, a, b, c, startX, endX, dX;

    cout << "������� �������� a: ";
    cin >> a;
    cout << "������� �������� b: ";
    cin >> b;
    cout << "������� �������� c: ";
    cin >> c;
    cout << "������� �������� startX: ";
    cin >> startX;
    cout << "������� �������� endX: ";
    cin >> endX;
    cout << "������� �������� dX: ";
    cin >> dX;

    cout << endl << "x    | F    " << endl;

    for (float x = startX; x <= endX; x += dX) {
        if (x <= 0 && b != 0) {
            F = a * x * x * x + b * x * x;
        } else if (x > 0 && b == 0) {
            F = (x - a) / (x - c);
        } else {
            F = (x + 5) / (c * (x - 10));
        }

        if (!(int(a) & int(b) & int(c)) == 0) {
            F = int(F);
        }

        cout << x << " | " << F << endl;
    }


    return 0;
}