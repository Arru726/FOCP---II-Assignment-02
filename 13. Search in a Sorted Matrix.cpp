#include <iostream>
using namespace std;

int main() {
    int r, c, target;
    cout << "Enter rows and columns: ";
    cin >> r >> c;
    int mat[r][c];

    cout << "Enter sorted matrix:\n";
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> mat[i][j];

    cout << "Enter target to search: ";
    cin >> target;

    int i = 0, j = c - 1;
    bool found = false;
    while (i < r && j >= 0) {
        if (mat[i][j] == target) {
            found = true;
            cout << "Found at position (" << i << ", " << j << ")\n";
            break;
        } else if (mat[i][j] > target) {
            j--;
        } else {
            i++;
        }
    }

    if (!found) cout << "Not found.\n";
    return 0;
}
