//
// Created by Роман Князев on 15.12.2022.
//

// Вычислить q = tg(x) - ln(sqrt(|sin(x/12) + e^(x^2-5))|))


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

    double q = tan(x_in_radians) - log(sqrt(fabs(sin(x_in_radians / 12) + exp(pow(x, 2) - 5))));

    cout << "Результат выражения q = tg(x) - ln(sqrt(|sin(x/12) + e^(x^2-5))|)) = ";
    cout << q;

    return 0;
}