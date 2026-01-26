#include <iostream>
using namespace std;

class Solution {
   public:
    int countOdd(int arr[], int n) {
        int sum_of_arr = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]%2!=0)
            sum_of_arr += 1;
        }
        return sum_of_arr;
    }
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sol.countOdd(arr, n);
    cout << "The count of odd numbers in the array is: " << result << endl;
    return 0;
}


// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the number of elements in the array. We traverse the array once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for the loop variable 'i' and
// 'sum_of_arr'.
// The space used for input does not count towards space complexity.
