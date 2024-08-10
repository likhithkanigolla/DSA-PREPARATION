// Problem statement
// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****

#include <iostream>
using namespace std;

void nStarTriangle(int n) {
// Write your code here.
    if (n == 1) {
    cout << "*";
    }
    else{
        for (int i = 1; i <= n; i++) {
            for (int j = n - 1; j >= i; j--)
            cout << " ";
            for (int j = 3; j <= (i * 2) + 1; j++) {
            cout << "*";
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    nStarTriangle(n);
    return 0;
}