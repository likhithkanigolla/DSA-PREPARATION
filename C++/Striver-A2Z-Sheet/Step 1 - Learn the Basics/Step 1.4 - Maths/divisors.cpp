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