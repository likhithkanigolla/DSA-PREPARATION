#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    // Function to sort the array using insertion sort
    vector<int> insertionSort(vector<int>& nums) {
        int n = nums.size(); // Size of the array 
        
        // For every element in the array 
        for (int i = 1; i < n; i++) {
            int key = nums[i]; // Current element as key 
            int j = i - 1; 
            
            // Shift elements that are greater than key by one position
            while (j >= 0 && nums[j] > key) {
                nums[j + 1] = nums[j];
                j--;
            }
            
            nums[j + 1] = key; // Insert key at correct position
        }
        
        return nums;
    }
};


int main() {
    // Create an instance of solution class
    Solution solution;
    
    vector<int> nums = {13, 46, 24, 52, 20, 9};
    
    cout << "Before Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for insertion sort
    nums = solution.insertionSort(nums);

    cout << "After Using Insertion Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}



// My Code
// class Solution {
// public:
//     vector<int> insertionSort(vector<int>& nums) {
//         // Pick the element, see if greather than the left element if not swap until it follows the rule 
//         // First let me write a loop to read the elements 
//         int size_of_the_vector = nums.size(); 
//         // writing from one as i cant swap the element before 0 since no element
//         for (int i=1;i<size_of_the_vector;i++){
//             // inner loop that starts from i and goes backwards
//             // for 1 -> 0
//             // for 2 -> 1,0
//             for (int j=i;j>0;j--){
//                 if(nums[j-1]>nums[j]){
//                     swap(nums[j-1],nums[j]);
//                 }
//                 else{
//                     break;
//                 }
//             }
//         }
//         return nums;
//     }
// };

// Insertion Sort: User Code vs. Striver Code
// Both the user's code and Striver's code attempt to implement insertion sort. However, Striver's code is generally considered better due to its clarity, adherence to the standard insertion sort algorithm, and robustness.

// User's Code Analysis
// The user's code has made some progress towards insertion sort but contains logical flaws that prevent it from sorting correctly.

// Inner Loop Logic: The inner loop for (int j=i; j>0; j--) with swap(nums[j-1], nums[j]) performs a bubble sort-like comparison and swap. It compares adjacent elements and swaps them if they are out of order. While this can move elements, it's not the standard insertion sort strategy of shifting elements to make space.
// Efficiency: This approach repeatedly swaps adjacent elements. In the worst case, an element might be swapped multiple times to reach its position, which is less efficient than the direct shifting method of insertion sort.
// break statement: The else { break; } statement correctly stops the inner loop once an element is in its correct relative position, which is good.
// Index j: The loop starts j from i, but the comparison uses nums[j-1] and nums[j]. This is a bit unusual and can be confusing. Typically, j would start from i-1 and go down.
// Striver's Code Analysis
// Striver's code implements the classic and standard insertion sort algorithm.

// Core Idea: It correctly identifies the key element (nums[i]) that needs to be inserted into the sorted sub-array nums[0...i-1].
// Shifting Mechanism: The while (j >= 0 && nums[j] > key) loop is the hallmark of insertion sort. It efficiently shifts elements that are larger than the key one position to the right to create a gap.
// Insertion: After shifting, nums[j + 1] = key; correctly places the key into its sorted position.
// Clarity and Readability: The variable names (key, j) and the structure of the loops make the code easy to understand and follow.
// Robustness: This implementation is a widely recognized and correct way to perform insertion sort.
// Which is Better?
// Striver's code is definitively better.

// Correctness: Striver's code implements the insertion sort algorithm correctly. The user's code, while attempting a sort, does not follow the standard insertion sort logic and might not produce correct results for all inputs.
// Efficiency: Striver's approach of shifting elements is more direct and generally more efficient for insertion sort than the repeated adjacent swaps in the user's inner loop.
// Readability and Maintainability: Striver's code is cleaner, more idiomatic, and thus easier to understand and maintain. It aligns with how insertion sort is typically taught and presented.
// Standard Implementation: Striver's code represents the canonical insertion sort algorithm.
// The user's code has a good intention and some elements of sorting, but it deviates from the insertion sort pattern by using a bubble-sort-like adjacent swap mechanism within its inner loop instead of the characteristic shifting of elements.


// Complexity Analysis
// Time Complexity
// O(n^2) The outer loop iterates n-1 times, and in the worst case, the inner loop can iterate up to i times for each iteration of the outer loop. This results in approximately 1 + 2 + ... + (n-1) comparisons, which is O(n^2).
// Space Complexity
// O(1) The sorting is done in-place, using only a constant amount of extra space for variables like i, j, and size_of_the_vector, regardless of the input size.