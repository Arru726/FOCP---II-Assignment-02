#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter rows and columns: ";
    cin >> row >> col;
    int mat[row][col];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> mat[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++)
            cout << mat[j][i] << " ";
        cout << endl;
    }

    return 0;
}
