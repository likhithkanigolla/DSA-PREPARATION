#include <iostream>
using namespace std;

class Solution{	
	public:
		long long int factorial(int n){
			//your code goes here
			 if (n <= 1) return 1;
			return n*factorial(n-1);
			
		}
};

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    
    Solution obj;
    long long int result = obj.factorial(n);
    
    cout << "Factorial of " << n << " is: " << result << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity
// O(n) The factorial function is recursive. In the worst case (n > 1), it makes n recursive calls. 
// Each call performs a constant amount of work (comparison, multiplication, and return). Therefore, the time 
// complexity is proportional to n.
// Space Complexity
// O(n) The factorial function is recursive. Each recursive call adds a new frame to the call stack to store its 
// local variables and return address. In the worst case (n > 1), there will be n active recursive calls on the 
// stack simultaneously. This leads to a space complexity proportional to n for the call stack.
