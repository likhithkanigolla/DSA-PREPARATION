#include <iostream>
using namespace std;

class Solution{	
public:	
	int first=0;
	vector<char> reverseString(vector<char>& s){
		//your code goes here
		int size_of_vector=s.size();
		if (first==(size_of_vector/2)){
			return s;
		}
		char temp=s[first];
		s[first]=s[size_of_vector-first-1];
		s[size_of_vector-first-1]=temp;
		first++;
		return reverseString(s);
	}
};

class Solution2 {
private:
    /* Recursive function to reverse the 
    string character by character */
    void reverse(vector<char>& s, int left, int right) {
        
        // Base case
        if (left >= right) return;
        
        // Swap characters at left and right positions
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        
        // Recursive call with updated indices
        reverse(s, left + 1, right - 1);
    }
    
public:
    // Function to reverse the given string
    vector<char> reverseString(vector<char>& s) {
        int left = 0;
        int right = s.size() - 1;
        reverse(s, left, right);
        return s;
    }
};

int main() {
    int n;
    cout << "Enter the number of characters in the string: ";
    cin >> n;
    
    vector<char> s(n);
    cout << "Enter the characters of the string: ";
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    
    Solution obj;
    vector<char> result = obj.reverseString(s);
    
    cout << "Reversed string: ";
    for (char c : result) {
        cout << c;
    }
    cout << endl;
    
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(n) - The function makes n/2 recursive calls, where n is the length of the string.
// Space Complexity: O(n) - The recursion stack will hold n/2 function calls at most.


