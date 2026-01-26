#include <iostream>
using namespace std;

class Solution {
public:
    int factorial(int n) {
        if (n==1||n==0){return 1;}
        if (n==2){return 2;}
        int result=1;
        for(int i=1;i<=n;i++){
            result=result*i;
        }
        return result;

    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << sol.factorial(n) << endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the input number. We multiply numbers from 1 to N to compute the
// factorial.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for the variable 'result' and
// the loop variable 'i'.
