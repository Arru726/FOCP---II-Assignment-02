#include <iostream>
using namespace std;

int main() {
    int r, c;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int mat[r][c];

    cout << "Enter matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Boundary elements:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                cout << mat[i][j] << " ";
    return 0;
}
