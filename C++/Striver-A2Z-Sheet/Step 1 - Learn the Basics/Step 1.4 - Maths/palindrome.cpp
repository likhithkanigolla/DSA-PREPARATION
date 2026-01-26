#include <iostream>
using namespace std;
class Solution {
   public:
    bool isPalindrome(int n) {
        int revNum = 0;
        int originalNum = n;

        while (n > 0) {
            int lastDigit = n % 10;
            // revNum+=lastDigit;
            n = n / 10;
            revNum = revNum * 10 + lastDigit;
        }

        return originalNum==revNum;
    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << (sol.isPalindrome(n) ? "Yes" : "No") << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(D)
// Where D is the number of digits in the input number. We traverse each digit once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'revNum',
// 'originalNum', and 'lastDigit'.
// The space used for input does not count towards space complexity.

