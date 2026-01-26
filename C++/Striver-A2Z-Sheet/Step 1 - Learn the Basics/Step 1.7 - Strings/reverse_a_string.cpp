#include <iostream>
using namespace std;

class Solution{	
	public:		
		void reverseString(vector<char>& s){
			//your code goes here
			int start=0, end=s.size()-1;
			while(start<end){
				char ch = s[start];
				s[start] = s[end];
				s[end] = ch;

				start++;
				end--;
			}
		}

};

int main() {
    Solution sol;
    vector<char> str = {'h', 'e', 'l', 'l', 'o'};
    sol.reverseString(str);
    cout << "Reversed string: ";
    for (char c : str) {
        cout << c;
    }
    cout << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the length of the input string. We traverse the string once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'start', 'end
// and 'ch'.
