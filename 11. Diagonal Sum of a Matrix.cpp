#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int mat[n][n];

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    int primary = 0, secondary = 0;
    for (int i = 0; i < n; i++) {
        primary += mat[i][i];
        secondary += mat[i][n - i - 1];
    }

    cout << "Primary diagonal sum: " << primary << endl;
    cout << "Secondary diagonal sum: " << secondary << endl;

    return 0;
}
