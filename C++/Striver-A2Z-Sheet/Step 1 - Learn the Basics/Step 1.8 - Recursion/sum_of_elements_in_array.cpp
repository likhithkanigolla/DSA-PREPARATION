#include <iostream>
using namespace std;

class Solution{	
	public:
		int arraySum(vector<int>& nums){
			//your code goes here
			int size_of_the_vector=nums.size();
			if (size_of_the_vector==1){
				return nums[0];
			}
			int last_element=nums[size_of_the_vector-1];
			nums.pop_back();
			return last_element+arraySum(nums);
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
    int result = obj.arraySum(nums);
    
    cout << "Sum of elements in the array is: " << result << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(n) - The function makes n recursive calls, where n is the
// number of elements in the array.
// Space Complexity: O(n) - The recursion stack will hold n function calls at most.
