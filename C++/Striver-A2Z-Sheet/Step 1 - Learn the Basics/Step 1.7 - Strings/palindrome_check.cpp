#include <iostream>
using namespace std;

class Solution{	
	public:		
		bool palindromeCheck(string& s){
			//your code goes here
            // Two pointer approach
			int start=0, end = s.size()-1;
            // Compare characters from start and end moving towards the center
            // If any characters don't match, it's not a palindrome
            // Example: "racecar"
            // start=0 ('r'), end=6 ('r') -> match
            // start=1 ('a'), end=5 ('a') -> match
            // start=2 ('c'), end=4 ('c') -> match
            // start=3 ('e'), end=3 ('e') -> center reached
			while(start<end){
				if(s[start]!=s[end]){
					return false;
				}
				start++, end --;
			}
			return true;
		}
};

int main() {
    Solution sol;
    string str;
    cout << "Enter a string: ";
    cin >> str;
    bool result = sol.palindromeCheck(str);
    if (result) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the length of the input string. We traverse the string once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'start' and 'end'.