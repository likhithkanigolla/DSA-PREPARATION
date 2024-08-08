#include <iostream>
using namespace std;

class Solution {
  public:
    string compareNM(int n, int m){
        // code here
        if (n<m)
            return "lesser";
        else if(n==m)
            return "equal";
        else
            return "greater";
    }
};

int main() {
    int n, m;
    cin >> n >> m;
    Solution ob;
    cout << ob.compareNM(n, m) << endl;
    return 0;
}