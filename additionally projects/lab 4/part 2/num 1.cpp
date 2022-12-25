//
// Created by Роман Князев on 24.12.2022.
//

// Задание: Определить количество положительных элементов, расположенных ниже побочной диагонали матрицы.

#include <iostream>

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

// Подсчет количества положительных элементов расположенных ниже побочной диагонали матрицы.
int counting(double **matrix, int num_of_row, int num_of_column) {
    int count_of_positive_elem = 0;
    for (int i = 0; i < num_of_row; ++i) {
        for (int j = 0; j < num_of_column; ++j) {
            if (i + j > num_of_row - 1 && matrix[i][j] > 0 && i != 0) {
                count_of_positive_elem++;
            }
        }
    }

    return count_of_positive_elem;
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

    cout << "Count the number of positive elements located below the side diagonal of the matrix. " << counting(matrix, num_of_row, num_of_column);

    free_memory(matrix, num_of_row);
}
