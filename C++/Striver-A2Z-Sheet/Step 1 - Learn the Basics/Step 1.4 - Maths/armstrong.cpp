#include <iostream>
#include <cmath>
using namespace std;

class Solution {
public:
    bool isArmstrong(int n) {
        int digits=(log10(n)+1);
        int copy_n = n;
        int calculate=0;
        while(n>0){
            int lastDigit=n%10;
            calculate=calculate+pow(lastDigit, digits);
            n=n/10;
        }
        return copy_n==calculate;

    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << (sol.isArmstrong(n) ? "Yes" : "No") << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(D)
// Where D is the number of digits in the input number. We traverse each digit once.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'digits', 'copy
// _n', 'calculate', and 'lastDigit'.
