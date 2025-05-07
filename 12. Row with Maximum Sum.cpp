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

    int maxSum = 0, maxRow = 0;
    for (int i = 0; i < r; i++) {
        int rowSum = 0;
        for (int j = 0; j < c; j++)
            rowSum += mat[i][j];
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }

    cout << "Row " << maxRow << " has the maximum sum: " << maxSum << endl;
    return 0;
}
