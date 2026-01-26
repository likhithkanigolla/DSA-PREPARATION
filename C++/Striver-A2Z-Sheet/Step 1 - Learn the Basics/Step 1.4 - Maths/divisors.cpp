#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> divisors(int n) {
        vector<int> out_divisors;
        for(int i=1;i<=n;i++){
            if(n%i==0){
                out_divisors.push_back(i);
            }
        }
        return out_divisors;
    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    vector<int> res = sol.divisors(n);
    for (int d : res) {
        cout << d << " ";
    }
    cout << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the input number. We check each number from 1 to N to see
// if it is a divisor of N.
// Space Complexity: O(D)
// Where D is the number of divisors of N. In the worst case, when N
// is 1, we store one divisor. In general, the number of divisors can vary
// based on the value of N.
// For example, if N is a prime number, it has only two divisors: 1 and N itself.
// If N is a highly composite number, it can have many divisors.
// Thus, the space complexity depends on the number of divisors D.
