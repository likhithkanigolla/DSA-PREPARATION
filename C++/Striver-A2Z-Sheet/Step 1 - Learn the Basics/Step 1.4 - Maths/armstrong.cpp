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