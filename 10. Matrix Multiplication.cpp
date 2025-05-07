#include <iostream>
using namespace std;

int main() {
    int a, b, c, d;
    cout << "Enter dimensions of first matrix (rows cols): ";
    cin >> a >> b;
    cout << "Enter dimensions of second matrix (rows cols): ";
    cin >> c >> d;

    if (b != c) {
        cout << "Matrix multiplication not possible.\n";
        return 0;
    }

    int mat1[a][b], mat2[c][d], result[a][d];

    cout << "Enter first matrix:\n";
    for (int i = 0; i < a; i++)
        for (int j = 0; j < b; j++)
            cin >> mat1[i][j];

    cout << "Enter second matrix:\n";
    for (int i = 0; i < c; i++)
        for (int j = 0; j < d; j++)
            cin >> mat2[i][j];

    for (int i = 0; i < a; i++)
        for (int j = 0; j < d; j++) {
            result[i][j] = 0;
            for (int k = 0; k < b; k++)
                result[i][j] += mat1[i][k] * mat2[k][j];
        }

    cout << "Result matrix:\n";
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < d; j++)
            cout << result[i][j] << " ";
        cout << endl;
    }

    return 0;
}
