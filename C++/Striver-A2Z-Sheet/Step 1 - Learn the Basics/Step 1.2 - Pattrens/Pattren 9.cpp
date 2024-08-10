// Problem statement
// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Diamond.

// Example:
// Input: ‘N’ = 3

// Output: 

//   *
//  ***
// *****
// *****
//  ***
//   *
#include <iostream>
using namespace std;

void nStarDiamond(int n) {
  // Write your code here.
  if (n == 1) {
    cout << "*"<<endl<<"*";
  } else {
    for (int i = 1; i <= n; i++) {
      for (int j = n - 1; j >= i; j--)
        cout << " ";
      for (int j = 3; j <= (i * 2) + 1; j++) {
        cout << "*";
      }
      cout << endl;
    }
    for (int i = n; i >= 1; i--) {
      for (int j = n - 1; j >= i; j--)
        cout << " ";
      for (int j = (i * 2) + 1; j >= 3; j--) {
        cout << "*";
      }
      cout << endl;
    }
  }
}

int main() {
  int n;
  cin >> n;
  nStarDiamond(n);
  return 0;
}