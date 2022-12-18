//
// Created by Роман Князев on 17.12.2022.
//

#include <iostream>

using namespace std;

int main() {

    setlocale(LC_CTYPE, "Russian");

    // Ввод K, M, N

    int K, M, N;

    cout << "Введите K = ";
    cin >> K;

    cout << "Введите M = ";
    cin >> M;

    cout << "Введите N = ";
    cin >> N;

    if (K % 2 == 0) {
        if (M % 2 == 0 || N % 2 == 0) {
            cout << "Среди данных чисел есть хотя бы два четных числа.";
        } else {
            cout << "Среди данных чисел не имеются хотя бы два четных числа.";
        }
    } else {
        if (M % 2 == 0 && N % 2 == 0) {
            cout << "Среди данных чисел есть хотя бы два четных числа.";
        } else {
            cout << "Среди данных чисел не имеются хотя бы два четных числа.";
        }

    }

    return 0;
}