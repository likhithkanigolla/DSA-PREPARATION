#include <iostream>
using namespace std;
class Solution {
public:
    bool arraySortedOrNot(int arr[], int n) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    bool result = sol.arraySortedOrNot(arr, n);
    if (result) {
        cout << "The array is sorted." << endl;
    } else {
        cout << "The array is not sorted." << endl;
    }
    return 0;
}


// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the number of elements in the array. We traverse the array once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for the loop variable 'i'.
