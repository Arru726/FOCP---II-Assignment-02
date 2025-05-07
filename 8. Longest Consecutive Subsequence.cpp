#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int arr[n];

    cout << "Enter elements:\n";
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr + n);

    int longest = 1, current = 1;
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1] + 1)
            current++;
        else if (arr[i] != arr[i - 1])
            current = 1;

        longest = max(longest, current);
    }

    cout << "Length of longest consecutive subsequence: " << longest << endl;
    return 0;
}
