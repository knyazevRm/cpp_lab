//
// Created by Роман Князев on 17.12.2022.
//

//Вычислить: S = (arctg(x) - tg(y)) / sqrt(fabs(x^3) + e^(sin(y))

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");

    // Исходные данные

    const double pi = 3.14159;

    double x, y;

    // Ввод значения x (от -1 до 1)

    cout << "Введите x = ";
    cin >> x;

    // Ввод значения y

    cout << "Введите y = ";
    cin >> y;

    double y_in_radians = y * pi / 180;

    double S = (atan(x) - tan(y_in_radians)) / sqrt(fabs(pow(x, 3)) + exp(sin(y_in_radians)));

    cout << "Результат выражения S = (arctg(x) - tg(y)) / sqrt(fabs(x^3) + e^(sin(y)) = ";
    cout << S;

    return 0;
}
