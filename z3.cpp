#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    float F, a, b, c, startX, endX, dX;

    cout << "Введите значение a:";
    cin >> a;
    cout << "Введите значение b:";
    cin >> b;
    cout << "Введите значение c:";
    cin >> c;
    cout << "Введите значение startX:";
    cin >> startX;
    cout << "Введите значение endX:";
    cin >> endX;
    cout << "Введите значение dX:";
    cin >> dX;

    cout << endl << "x    | F    " << endl;

    for (float x = startX; startX <= x && x <= endX; x += dX) {
        if (x <= 0 && b != 0) {
            F = a * x * x * x + b * x * x;
        } else if (x > 0 && b == 0) {
            F = (x - a) / (x - c);
        } else {
            F = (x + 5) / (c * (x - 10));
        }

        cout << x << " | " << F << endl;
    }


    return 0;
}