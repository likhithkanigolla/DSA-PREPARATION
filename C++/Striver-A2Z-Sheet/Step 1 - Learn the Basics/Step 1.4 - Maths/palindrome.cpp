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