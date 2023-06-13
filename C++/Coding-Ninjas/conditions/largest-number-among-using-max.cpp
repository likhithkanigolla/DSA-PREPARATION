#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int maxNum = max(max(a, b), c);
    cout << maxNum;
    
    return 0;
}
