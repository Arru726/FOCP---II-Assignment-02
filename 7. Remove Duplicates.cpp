#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n], unique[n], count = 0;

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        bool isDuplicate = false;
        for (int j = 0; j < count; j++) {
            if (arr[i] == unique[j]) {
                isDuplicate = true;
                break;
            }
        }
        if (!isDuplicate) {
            unique[count] = arr[i];
            count++;
        }
    }

    cout << "Array after removing duplicates:\n";
    for (int i = 0; i < count; i++) cout << unique[i] << " ";

    return 0;
}
