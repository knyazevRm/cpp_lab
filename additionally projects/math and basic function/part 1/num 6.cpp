//
// Created by Роман Князев on 13.12.2022.
//

// Задание: Вычислить y = |x - cos(x)|


#include <iostream>
#include <math.h>

using namespace std;


int main() {

    setlocale(LC_CTYPE, "Russian");

    // Исходные данные

    const double pi = 3.14159;

    double x;

    // Ввод значения x

    cout << "Введите x = ";
    cin >> x;

    double x_in_radians = x * pi / 180;

    cout << "Результат выражения |x - cos(x)| = ";
    cout << fabs(x - cos(x_in_radians));

    return 0;
}