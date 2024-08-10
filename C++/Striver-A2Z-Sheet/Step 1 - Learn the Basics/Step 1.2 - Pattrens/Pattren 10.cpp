// Problem statement
// Ninja was very fond of patterns. For a given integer ‘N’, he wants to make the N-Star Rotated Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// *
// **
// ***
// **
// *


#include <iostream>
using namespace std;

void nStarTriangle(int n) {
  // Write your code here.
  if (n == 1) {
    cout << "*";
  } else {
    for (int j = 1; j <= n; j++) {
      for (int i = 1; i <= j; i++) {
        cout << "*";
      }
      cout << endl;
    }
    for (int j = n; j>1; j--) {
      for (int i = 2; i <= j; i++) {
        cout << "*";
      }
      cout << endl;
    }
  }
}