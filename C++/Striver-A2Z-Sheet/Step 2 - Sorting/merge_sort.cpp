#include <iostream>
using namespace std;

class Solution {
public:
    // Helper function to merge two sorted sub-arrays
    // arr: the original array
    // left: starting index of the left sub-array
    // mid: ending index of the left sub-array
    // right: ending index of the right sub-array
    void merge(std::vector<int>& arr, int left, int mid, int right) {
        // Calculate sizes of the two sub-arrays to be merged
        int n1 = mid - left + 1;
        int n2 = right - mid;

        // Create temporary vectors for the left and right sub-arrays
        std::vector<int> L(n1);
        std::vector<int> R(n2);

        // Copy data to temporary vectors L[] and R[]
        for (int i = 0; i < n1; i++)
            L[i] = arr[left + i];
        for (int j = 0; j < n2; j++)
            R[j] = arr[mid + 1 + j];

        // Merge the temporary vectors back into arr[left..right]

        // Initial indices of first, second and merged sub-arrays
        int i = 0, j = 0, k = left;

        // Compare elements from L and R and place the smaller one into arr
        while (i < n1 && j < n2) {
            if (L[i] <= R[j]) { // Use <= for stable sort
                arr[k] = L[i];
                i++;
            } else {
                arr[k] = R[j];
                j++;
            }
            k++;
        }

        // Copy the remaining elements of L[], if any
        while (i < n1) {
            arr[k] = L[i];
            i++;
            k++;
        }

        // Copy the remaining elements of R[], if any
        while (j < n2) {
            arr[k] = R[j];
            j++;
            k++;
        }
    }

    // Main function that sorts arr[left..right] using merge()
    // arr: the array to be sorted
    // left: starting index of the array segment
    // right: ending index of the array segment
    void mergeSortHelper(std::vector<int>& arr, int left, int right) {
        // Base case: if the segment has 0 or 1 element, it's already sorted
        if (left >= right) {
            return;
        }

        // Find the middle point to divide the array into two halves
        int mid = left + (right - left) / 2; // Avoids potential overflow with (left+right)/2

        // Recursively sort the first half
        mergeSortHelper(arr, left, mid);

        // Recursively sort the second half
        mergeSortHelper(arr, mid + 1, right);

        // Merge the sorted halves
        merge(arr, left, mid, right);
    }

    // Public function to initiate the merge sort process
    std::vector<int> mergeSort(std::vector<int>& nums) {
        if (nums.empty()) {
            return nums; // Return empty vector if input is empty
        }
        // Call the helper function to sort the entire array
        mergeSortHelper(nums, 0, nums.size() - 1);
        return nums;
    }
};


int main() {
    // Create an instance of the Solution class
    Solution solution;

    // Sample input array
    std::vector<int> nums = {38, 27, 43, 3, 9, 82, 10};

    cout << "Before Using Merge Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    // Function call for Merge Sort
    nums = solution.mergeSort(nums);

    cout << "After Using Merge Sort: " << endl;
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}


// Complexity Analysis:
// Time Complexity
// O(n log n) The merge sort algorithm has a time complexity of O(n log n). The 'merge' function itself takes O(n) time because it iterates through the elements of the two sub-arrays once. The 'mergeSortHelper' function recursively divides the array in half, leading to a logarithmic number of levels (log n). At each level, the 'merge' operation processes all n elements. Therefore, the total time complexity is O(n log n). The init loops are part of the 'merge' function, specifically the loops that copy elements to temporary arrays L and R, and the loops that merge them back. These loops contribute to the O(n) complexity of the merge step.
// Space Complexity
// O(n) The space complexity of this merge sort implementation is O(n) due to the creation of temporary arrays 'L' and 'R' within the 'merge' function. In the worst case, these temporary arrays can hold up to n elements (when merging two halves of size n/2). The recursive calls to 'mergeSortHelper' also consume stack space, but this is O(log n) and is dominated by the O(n) space required for the temporary arrays.