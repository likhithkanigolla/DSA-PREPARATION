#include <iostream>
using namespace std;

void ArrInput(int Array[][100], int rows, int columns) {
    int element;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << "Enter The Element for [" << i << "][" << j << "]: ";
            cin >> element;
            Array[i][j] = element;
        }
    }
}

void printArray(int Array[][100], int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << Array[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int rows, columns;

    cout << "Enter Number of Rows: ";
    cin >> rows;

    cout << "Enter Number of Columns: ";
    cin >> columns;

    int Array[100][100];

    ArrInput(Array, rows, columns);

    cout << "Array Elements: " << endl;
    printArray(Array, rows, columns);

    return 0;
}
