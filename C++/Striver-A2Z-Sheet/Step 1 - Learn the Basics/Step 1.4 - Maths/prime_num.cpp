#include <iostream>
using namespace std;

class Solution {
public:
    int sum_divisors(int n) {
        if (n == 1) return 0;
        int sum = 1;
        for (int i = 2; i * i <= n; ++i) {
            if (n % i == 0) {
                sum += i;
                if (i * i != n) {
                    sum += n / i;
                }
            }
        }
        return sum;
    }

    bool isPerfect(int n) {
        return sum_divisors(n) == n;
    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << (sol.isPerfect(n) ? "Yes" : "No") << endl;
    return 0;
}