//
// Created by Роман Князев on 17.12.2022.
//

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Ввод x, y

    double x, y;

    cout << "Введите x = ";
    cin >> x;

    cout << "Введите y = ";
    cin >> y;

    if (x < 0) {
        cout << "x < 0: ";
        cout << "f(x, y) = y - x = " << y - x << " при x = " << x << ", y = " << y;
    } else {
        if (y < 0) {
            cout << "x >= 0 и y < 0: ";
            cout << "f(x, y) = y^2 - x = " << pow(y, 2) - x << " при x = " << x << ", y = " << y;
        } else {
            const double pi = 3.14159;
            cout << "остальные случаи: ";
            cout << "f(x, y) = sin(y) = " << sin(y * pi / 180) << " при x = " << x << ", y = " << y;
        }
    }

    return 0;
}