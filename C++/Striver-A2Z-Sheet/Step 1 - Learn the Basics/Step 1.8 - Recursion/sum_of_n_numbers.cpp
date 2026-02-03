#include <iostream>
using namespace std;

class Solution{	
	public:
		int NnumbersSum(int n){
			//your code goes here
			if(n==1) return 1;
			return n+NnumbersSum(n-1);
		}
};


int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    Solution obj;
    int result = obj.NnumbersSum(n);
    
    cout << "Sum of first " << n << " natural numbers is: " << result << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(n) - The function makes n recursive calls.
// Space Complexity: O(n) - The recursion stack will hold n function calls at most.