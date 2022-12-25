//
// Created by Роман Князев on 23.12.2022.
//

// Задание: Найти и поменять местами элементы, имеющие минимальное и максимальное значения в массиве.


#include <iostream>

using namespace std;

// Возвращает индекс крайнего максимального элемента в переданном массиве
int get_max_index(int *arr, int length) {
    int index_max;

    if (length > 0) {
        index_max = 0;
    } else {
        return -1;
    }

    for (int i = 1; i < length; ++i) {
        if (arr[index_max] <= arr[i]) {
            index_max = i;
        }
    }

    return index_max;
}

// Возвращает индекс крайнего минимального элемента в переданном массиве
int get_min_index(int *arr, int length) {
    int index_min;

    if (length > 0) {
        index_min = 0;
    } else {
        return -1;
    }

    for (int i = 1; i < length; ++i) {
        if (arr[index_min] >= arr[i]) {
            index_min = i;
        }
    }

    return index_min;
}

// swap 2 elemet in array
void swap_element(int *arr, int index_min, int index_max) {
    int temp = arr[index_max];
    arr[index_max] = arr[index_min];
    arr[index_min] = temp;
}


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


int main() {

    setlocale(LC_CTYPE, "Russian");

    int length;

    cout << "Input length of array. Length of array must be over then 0." << endl;
    cin >> length;


    int *array = create_array(length);

    input_array_value(array, length);

    int index_max = get_max_index(array, length);
    int index_min = get_min_index(array, length);

    print_int_array(array, length);

    cout << endl << "Index of max element: " << index_max << endl << "Index of min element: " << index_min;

    swap_element(array, index_min, index_max);

    cout << endl << "Array after swapping." << endl;

    print_int_array(array, length);

    return 0;
}
