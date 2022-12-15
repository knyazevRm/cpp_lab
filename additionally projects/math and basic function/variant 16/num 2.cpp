//
// Created by Роман Князев on 16.12.2022.
//

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Ввод a, b

    double a, b;

    cout << "Введите a = ";
    cin >> a;

    cout << "Введите b = ";
    cin >> b;

    if (a < 0) {
        if (b == 0) {
            cout << "a < 0 и b = 0";
            cout << "f(a, b) = 3 * a + 2 = " << 3 * a + 2 << endl << "при a = " << a << ", b = " << b;
        } else {
            cout << "a < 0 и b != 0";
            cout << "f(a, b) = 3 * a / (2 * b) = " << 3 * a / (2 * b) << endl << "при a = " << a << ", b = " << b;
        }
    } else {
        cout << "остальные случаи: ";
        cout << "f(a, b) = 3 * a - 2 * b = " << 3 * a - 2 * b << endl << "при a = " << a << ", b = " << b;
    }

    return 0;
}