// Задание: Вычислить площадь окружности по заданному радиусу

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Исходные данные

    const double pi = 3.14159;

    double radius;

    // Ввод значения радиуса

    cout << "Введите raduis = ";
    cin >> radius;

    cout << "Площадь = ";
    cout << pi * pow(radius, 2) << endl;

    return 0;
}
