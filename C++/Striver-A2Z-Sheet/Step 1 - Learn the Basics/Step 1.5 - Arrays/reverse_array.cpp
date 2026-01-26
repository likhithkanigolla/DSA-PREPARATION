#include <iostream>
using namespace std;

class Solution{
public:
    void reverse(int arr[], int n){
        int left=0;
        int right=n-1;
        while(left<right){
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    sol.reverse(arr, n);
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the number of elements in the array. We traverse half the array to reverse
// Space Complexity: O(1)
// We are using only a constant amount of extra space for the variables 'left' and 'right'.
