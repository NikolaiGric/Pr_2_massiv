#include <iostream>

using namespace std;


    const int rows = 3;
    const int columns = 5;
    void inputMatrix(double matrix[rows][columns]) {
        cout << "Введите элементы массива (3x5):\n";
        for (int i = 0; i < rows; ++i) {
            cout << "Строка " << i + 1 << ":\n";
            for (int j = 0; j < columns; ++j) {
                cout << "Элемент " << j + 1 << ": ";
                cin >> matrix[i][j];
            }
        }
    }

    void printMatrix(const double matrix[rows][columns]) {
        cout << "Массив:\n";
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < columns; ++j) {
                cout << matrix[i][j] << " ";
            }
            cout << endl;
        }
    }

    void averagesRow(const double matrix[rows][columns]) {
        cout << "Средние арифметические элементов строк:\n";
        for (int i = 0; i < rows; ++i) {
            double sum = 0;
            for (int j = 0; j < columns; ++j) {
                sum += matrix[i][j];
            }
            double average = sum / columns;
            cout << "Строка " << i + 1 << ": " << average << endl;
        }
    }

    int main() {
        setlocale(0, "");
        double matrix[rows][columns];
        inputMatrix(matrix);
        printMatrix(matrix);
        averagesRow(matrix);
    }
