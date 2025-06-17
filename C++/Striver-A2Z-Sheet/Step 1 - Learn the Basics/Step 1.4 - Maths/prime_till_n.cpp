#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
           if (n % i == 0) return false;
        }
        return true;
        
    }
    int primeUptoN(int n) {
        if(n<2){return 0;}
        if(n==2){return 1;}
        vector<int> prime_num;
        for(int i=3;i<=n;i+=2){
            if(isPrime(i)){
                prime_num.push_back(i);
            }
        }
        return (prime_num.size()+1);

    }
};

int main() {
    int n;
    cin >> n;
    Solution sol;
    cout << sol.primeUptoN(n) << endl;
    return 0;
}