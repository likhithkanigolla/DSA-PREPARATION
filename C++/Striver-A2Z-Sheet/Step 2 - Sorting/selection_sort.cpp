#include <iostream>
using namespace std;

class Solution {
public:
    // Function to sort the array using Selection Sort
    std::vector<int> selectionSort(std::vector<int>& nums) {
        // Get the size of the input vector
        // size_t is always a positive number 
        size_t vector_size = nums.size();
        // Outer loop iterates through the array.
        // `i` represents the boundary of the sorted subarray.
        // We only need to go up to `vector_size - 1` because the last element
        // will be in its correct place after sorting `n-1` elements.
        for (size_t i = 0; i < vector_size - 1; ++i) {
            // Assume the current element is the minimum
            size_t min_idx = i;
            // Inner loop finds the index of the minimum element
            // in the unsorted part of the array (from `i + 1` to the end)
            for (size_t j = i + 1; j < vector_size; ++j) {
                // If we find an element smaller than the current minimum
                if (nums[j] < nums[min_idx]) {
                    // Update the index of the minimum element
                    min_idx = j;
                }
            }
            // If the minimum element is not the element at the current position `i`,
            // swap them. This places the smallest element of the unsorted part
            // at the beginning of the unsorted part (position `i`).
            if (min_idx != i) {
                std::swap(nums[i], nums[min_idx]);
            }
        }
        // Return the sorted vector
        return nums;
    }
};

int main() {

    vector<int> arr = {7, 5, 9, 2, 8};
    
    cout << "Original array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    // Create an instance of the Solution class
    Solution s1;

    // function call for Selection Sort
    vector<int> sortedArr = s1.selectionSort(arr);

    cout << "Sorted array: ";
    for (int num : sortedArr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

// Complexity Analysis : 
// Time Complexity: O(n^2) - The outer loop runs n times and the inner loop also runs up to n times in the worst case, leading to a quadratic time complexity.
// Space Complexity: O(1) - The algorithm sorts the array in place, using only a constant amount of extra space for temporary variables during the swap operation.  


// // Original incorrect snippet
// for(int i=0;i<vector_size;i++){
//     for(int j=i+1;j<vector_size;j++){ // Inner loop starts from i+1
//         if(nums[i]>nums[j]){ // Comparison
//             swap(nums[i],nums[j]); // Swap occurs here
//         }
//     }
// }
// Early Swapping: The swap(nums[i], nums[j]) happens immediately within the inner loop whenever nums[i] > nums[j]. This means that as the inner loop progresses, nums[i] is constantly being compared with subsequent elements, and if a smaller element is found, nums[i] is swapped with that smaller element. This process continues, effectively moving the smallest element encountered so far towards the i-th position, but it's not necessarily the absolute minimum of the entire unsorted subarray.

// Bubble Sort Mechanism: This "compare adjacent or current with subsequent and swap if condition met" pattern is the hallmark of Bubble Sort. In Bubble Sort, larger elements "bubble up" to the end of the array (or smaller elements "sink" to the beginning) through repeated pairwise comparisons and swaps. The original code's inner loop structure, combined with the immediate swap, mimics this behavior.


