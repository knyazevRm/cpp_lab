//
// Created by Роман Князев on 24.12.2022.
//


// Задание: Найти минимальный среди элементов, лежащих ниже главной диагонали.

#include <iostream>
#include <float.h>

using namespace std;

// Вывод двухмерной матрицы
void print_matrix(double **matrix, int num_of_row, int num_of_column) {
    cout << "Matrix: " << endl;
    for (int i = 0; i < num_of_row; ++i) {
        for (int j = 0; j < num_of_column; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

// Создание двухмерной матрицы
double** create_matrix(int num_of_row, int num_of_column) {
    double **matrix = new double * [num_of_row];
    for (int i = 0; i < num_of_row; ++i) {
        matrix[i] = new double[num_of_column];
    }

    return matrix;
}

// Ввод двухмерного массива
void input_matrix_value(double **matrix, int num_of_row, int num_of_column) {
    for (int i = 0; i < num_of_row; ++i) {
        for (int j = 0; j < num_of_column; ++j) {
            cout << "matrix[" << i << "][" << j << "] = ";
            cin >> matrix[i][j];
        }
    }
}

// Освобождение памяти
void free_memory(double **matrix, int num_of_row) {
    for (int i = 0; i < num_of_row; ++i) {
        delete [] matrix[i];
    }
    delete [] matrix;
    matrix = NULL;
}

// Крайний минимальный элемент среди элементов, лежащих ниже главной диагонали.
double* min_elem_below_main_diagonal(double **matrix, int num_of_row, int num_of_column) {
    double min_element = DBL_MAX;
    double index_min_i = -1;
    double index_min_j = -1;

    for (int i = 0; i < num_of_row; ++i) {
        for (int j = 0; j < i && j != num_of_column - 1; ++j) {
            if (min_element >= matrix[i][j]) {
                min_element = matrix[i][j];
                index_min_i = i;
                index_min_j = j;
            }
        }
    }

    double *result = new double [3];

    result[0] = min_element;
    result[1] = index_min_i;
    result[2] = index_min_j;

    return result;
}

int main() {

    setlocale(LC_CTYPE, "Russian");

    int num_of_row, num_of_column;

    cout << "Input length of row. Length of row must be over then 0." << endl;
    cin >> num_of_row;
    cout << "Input length of column. Length of column must be over then 0." << endl;
    cin >> num_of_column;

    double **matrix = create_matrix(num_of_row, num_of_column);

    input_matrix_value(matrix, num_of_row, num_of_column);

    print_matrix(matrix, num_of_row, num_of_column);

    cout << endl;

    double *min_elem_i_j = min_elem_below_main_diagonal(matrix, num_of_row, num_of_column);

    cout << "Min value of elements located below the main diagonal of the matrix. " << min_elem_i_j[0] << endl;

    cout  << "Index i = " << min_elem_i_j[1] << ", index j = " << min_elem_i_j[2] << ".";

    free_memory(matrix, num_of_row);

    return 0;
}
