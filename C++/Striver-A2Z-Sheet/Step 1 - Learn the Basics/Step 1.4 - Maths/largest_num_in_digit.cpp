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
