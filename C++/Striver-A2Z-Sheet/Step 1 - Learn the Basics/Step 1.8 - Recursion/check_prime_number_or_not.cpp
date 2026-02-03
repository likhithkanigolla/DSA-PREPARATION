#include <iostream>
using namespace std;

class Solution{	
	public:
		vector<int> factors;
		int divided_by = 2;
		bool checkPrime(int num){
			//your code goes here
			if(num==0||num==1){
				return false;
			}
			if(factors.size()>1){
				return false;
			}
			if(divided_by>sqrt(num)){
				return true;
			}
			if(num%divided_by==0){
				return false;
			}
			divided_by++;
			return checkPrime(num);

		}
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    Solution obj;
    bool result = obj.checkPrime(n);
    
    if(result){
    	cout << n << " is a prime number." << endl;
    }
    else{
        cout << n << " is not a prime number." << endl;
    }
    return 0;
}

// Complexity Analysis
// Time Complexity
// O(sqrt(n)) The `checkPrime` function recursively calls itself, incrementing `divided_by` by 1 in each call. The recursion stops when `divided_by` exceeds the square root of `num`. Therefore, the time complexity is proportional to the square root of the input number `num`.
// Space Complexity
// O(sqrt(n)) The space complexity is determined by the recursion depth of the `checkPrime` function. In the worst case, the function calls itself until `divided_by` reaches `sqrt(num)`, leading to a space complexity proportional to the square root of `num` due to the call stack.

