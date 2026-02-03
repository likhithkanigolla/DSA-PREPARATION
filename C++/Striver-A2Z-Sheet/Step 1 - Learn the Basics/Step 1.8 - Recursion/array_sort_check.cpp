#include <iostream>
using namespace std;

class Solution{	
	public:
		int position=0;
		bool isSorted(vector<int>& nums){
			//your code goes here
			if(nums.size()<=1){
				return true;
				}
			if(position==nums.size()-1){
				return true;
			}
			if(nums[position]>nums[position+1]){
				return false;
			}
			position++;
			return isSorted(nums);
		}
};

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution obj;
    bool result = obj.isSorted(nums);
    
    if(result){
    	cout << "The array is sorted in non-decreasing order." << endl;
    }
    else{
        cout << "The array is not sorted in non-decreasing order." << endl;
    }
    return 0;
}

// Complexity Analysis
// Time Complexity
// O(n) The `isSorted` function is called recursively. In the worst case, it will be called for each element in the `nums` vector once, leading to a linear time complexity. The base cases and the comparison take constant time.
// Space Complexity
// O(n) The space complexity is determined by the recursion depth. In the worst case, the recursion depth can be equal to the number of elements in the `nums` vector, leading to a linear space complexity due to the call stack.