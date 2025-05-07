#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int mat[n][n];

    cout << "Enter matrix:\n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];

    bool found = false;
    for (int i = 0; i < n; i++) {
        int minVal = mat[i][0], colIdx = 0;
        for (int j = 1; j < n; j++) {
            if (mat[i][j] < minVal) {
                minVal = mat[i][j];
                colIdx = j;
            }
        }

        bool isSaddle = true;
        for (int k = 0; k < n; k++) {
            if (mat[k][colIdx] > minVal) {
                isSaddle = false;
                break;
            }
        }

        if (isSaddle) {
            cout << "Saddle Point found: " << minVal << endl;
            found = true;
        }
    }

    if (!found) cout << "No saddle point found.\n";

    return 0;
}
