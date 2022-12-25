//
// Created by Роман Князев on 23.12.2022.
//

// Задание: Вывести все неповторяющиеся элементы массива.


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

// Возвращает множество неповторяющихся элементов
int *get_set_of_array_element(int *arr, int length) {
    int count_of_unique_element = 0;

    int *set_of_array_element = new int[length + 1];

    for (int i = 0; i < length; ++i) {
        bool flag_unique_element = true;
        for (int j = 0; j < length && flag_unique_element; ++j) {
            if (arr[i] == arr[j] && i != j) {
                flag_unique_element = false;
            }
        }

        if (flag_unique_element) {
            set_of_array_element[count_of_unique_element] = arr[i];
            count_of_unique_element++;
        }
    }

    set_of_array_element[length] = count_of_unique_element;

    return set_of_array_element;
}

int main() {

    setlocale(LC_CTYPE, "Russian");

    int length;

    cout << "Input length of array. Length of array must be over then 0." << endl;
    cin >> length;


    int *array = create_array(length);

    input_array_value(array, length);

    print_int_array(array, length);

    int *result_array = get_set_of_array_element(array, length);

    cout << endl << "Set of array element. ";

    print_int_array(result_array, result_array[length]);

    return 0;
}

