//
// Created by Роман Князев on 13.12.2022.
//

// Задание: Найти корни квадратного уравнения Ах^2-Вх+С=0 для А,В и С, вводимых с клавиатуры.

#include <iostream>
#include <math.h>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    double a, b, c;

    // Ввод значений параметров a,b,c для квадратного уравнения
    cout << "Введите a (параметр a не должно быть равен 0) = ";
    cin >> a;
    cout << "Введите b = ";
    cin >> b;
    cout << "Введите c = ";
    cin >> c;

    cout << "Введенное квадратное уравнение: " << a << " * x^2 + " << b << " * x + " << c << " = 0" << endl;

    double discriminant = pow(b, 2) - 4 * a * c;
    cout << "Формула дискриминанта: D = b^2 - 4 * a * c = " << discriminant << endl;
    if (discriminant < 0) {
        cout << "Дискриминант меньше 0" << endl;
        cout << "Квадратное уравнение не имеет решений ";
    } else if (discriminant == 0) {
        cout << "Дискриминанта равен 0" << endl;
        cout << "Решением квадратного уравнения является x = ";
        cout << -b / (2 * a);
    } else {
        cout << "Дискриминант больше 0" << endl;
        cout << "Решением квадратного уравнения является x_1, x_2: " << endl;
        cout << "x_1 = " << (-b + sqrt(discriminant)) / (2 * a) << endl;
        cout << "x_2 = " << (-b - sqrt(discriminant)) / (2 * a);
    }

    return 0;
}