#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
      // Bubble sort Functin
    vector<int> bubbleSort(vector<int>& nums) {
        int n = nums.size();
        // Traverse through the array
        for (int i = n - 1; i >= 0; i--) {
            // Track if swaps are made 
            bool didSwap = false;
            for (int j = 0; j <= i - 1; j++) {
                // Swap if next element is smaller
                if (nums[j] > nums[j + 1]) {
                    swap(nums[j], nums[j + 1]);
                    didSwap = true;
                }
            }
            /**  Break out of loop 
         if no swaps done*/
            if (!didSwap) {
                break;
            }
        }
        return nums;
    }
};

int main() {
    // Create an instance of solution 
    Solution solution;
    
    vector<int> nums = {7, 4, 1, 5, 3};
    
    cout << "Before Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for Bubble Sort
    nums = solution.bubbleSort(nums);

    cout << "Array After Using Bubble Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// User Code:
// class Solution {
// public:
//     vector<int> bubbleSort(vector<int>& nums) {
//         int size_of_the_vector = nums.size();
//         for(int i=0;i<size_of_the_vector;i++){
//             for(int j=i+1;j<size_of_the_vector;j++){
//                 if(nums[i]>nums[j]){
//                     swap(nums[i],nums[j]);
//                 }
//             }
//         }
//         return nums;

//     }
// };



// User's vs. Striver's Code:

// The user's code iterates i from 0 to size_of_the_vector - 1 and j from i + 1 to size_of_the_vector - 1. This approach compares nums[i] with elements to its right. It correctly sorts but lacks the optimization of stopping early if no swaps occur.
// Striver's code iterates i from n - 1 down to 0 and j from 0 to i - 1. This is a more standard implementation of bubble sort where larger elements bubble to the end. Crucially, it includes the didSwap optimization, making it better for cases where the array might be partially or fully sorted already.
// Common Mistakes: Forgetting the didSwap optimization can lead to unnecessary passes. Incorrect loop bounds for i and j can also cause errors or incomplete sorting.