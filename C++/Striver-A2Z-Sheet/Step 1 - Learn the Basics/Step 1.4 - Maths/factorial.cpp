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
