#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main() {
    setlocale(0, "");
    int n;
    cout << "¬ведите n: ";
    cin >> n;

    int m[n][n];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = n*i+j+1;
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
}
