//
// Created by Роман Князев on 15.12.2022.
//

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Ввод x, y

    double x, y;

    cout << "Введите x = ";
    cin >> x;

    cout << "Введите y = ";
    cin >> y;

    if (x > 0) {
        cout << "x > 0: ";
        cout << "f(x, y) = x + y = " << x + y << endl << "при x = " << x << ", y = " << y;
    } else if (x <= 0 && y < 0) {
        cout << "x <= 0 и y < 0: ";
        cout << "f(x, y) = x * y = " << x * y << endl << "при x = " << x << ", y = " << y;
    } else {
        cout << "остальные случаи: ";
        cout << "f(x, y) = 5 * x = " << 5 * x << endl << "при x = " << x << ", y = " << y;
    }

    return 0;
}