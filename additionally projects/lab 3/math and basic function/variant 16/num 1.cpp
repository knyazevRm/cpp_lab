//
// Created by Роман Князев on 16.12.2022.
//

// Вычислить S = (cos(x) - 3 * tg(y)) / (e^(x*y) + sqrt(12 * x^2 - ln|y|))

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Исходные данные

    const double pi = 3.14159;

    double x, y;

    // Ввод значения x

    cout << "Введите x = ";
    cin >> x;

    // Ввод значения y

    cout << "Введите y = ";
    cin >> y;

    double x_in_radians = x * pi / 180;

    double y_in_radians = y * pi / 180;

    double S = (cos(x_in_radians) - 3 * tan(y_in_radians)) / (exp(x * y) + sqrt(12 * pow(x, 2) - log(fabs(y))));


    cout << "Результат выражения S = (cos(x) - 3 * tg(y)) / (e^(x*y) + sqrt(12 * x^2 - ln|y|)) = ";
    cout << S;

    return 0;
}