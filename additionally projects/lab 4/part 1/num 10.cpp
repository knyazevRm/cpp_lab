//
// Created by Роман Князев on 23.12.2022.
//

// Задание: Определить, симметричен ли массив, т.е. читается ли он одинаково слева направо и справа налево.


#include <iostream>

using namespace std;


// Вывод одномерного массива
void print_int_array(int *arr, int length) {
    cout << "Array: ";
    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
}

// Создание одномерного массива
int* create_array(int length) {
    int *array = new int[length];

    return array;
}

//Ввод значений в одномерный массив
void input_array_value(int *array, int length) {
    for (int i = 0; i < length; ++i) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }
}

// Проверка одномомерного массива на симметричность
bool checking_the_symmetry_of_the_array(int *arr, int length) {
    for (int i = 0; i < length / 2; ++i) {
        if (arr[i] != arr[length - i - 1]) {
            return false;
        }
    }

    return true;
}


int main() {

    setlocale(LC_CTYPE, "Russian");

    int length;

    cout << "Input length of array. Length of array must be over then 0." << endl;
    cin >> length;

    int *array = create_array(length);

    input_array_value(array, length);

    print_int_array(array, length);

    cout << endl;

    if (checking_the_symmetry_of_the_array(array, length)) {
        cout << "Array is symmetry.";
    } else {
        cout << "Array is not symmetry.";
    }

    return 0;
}


