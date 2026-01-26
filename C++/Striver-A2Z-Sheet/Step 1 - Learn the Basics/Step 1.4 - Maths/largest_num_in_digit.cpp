#include <iostream>
#include <algorithm>
using namespace std;

class Solution {
   public:
    int largestDigit(int n) {
        int largestDigit = 0;

        if (n == 0) {
            return 0;
        }

        while (n > 0) {
            int digit = n % 10;
            largestDigit = max(largestDigit, digit);
            n /= 10;
        }

        return largestDigit;
    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << sol.largestDigit(n) << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(D)
// Where D is the number of digits in the input number. We traverse each digit once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'largestDigit' and
// 'digit'.
// The space used for input does not count towards space complexity.