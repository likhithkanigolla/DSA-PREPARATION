#include <iostream>
#include <vector>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k) {
    int n = arr.size();

    for (int i = 0; i < k; i++) {
        int temp = arr[n - 1]; // Store the last element

        for (int j = n - 1; j > 0; j--) {
            arr[j] = arr[j - 1]; // Shift elements to the right
        }

        arr[0] = temp; // Place the stored last element at the beginning
    }

    return arr;
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<int> rotatedArr = rotateArray(arr, k);

    for (int i = 0; i < n; i++) {
        cout << rotatedArr[i] << " ";
    }

    return 0;
}
