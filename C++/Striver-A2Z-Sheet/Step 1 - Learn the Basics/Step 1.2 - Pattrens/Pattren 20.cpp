// Problem statement
// Sam is curious about symmetric patterns, so he decided to create one.

// For every value of ‘N’, return the symmetry as shown in the example.

// Example:
// Input: ‘N’ = 3

// Output: 
// *         *
// * *     * *
// * * * * * *
// * *     * *
// *         *

#include <iostream>
using namespace std;

void symmetry(int n) {
  // Write your code here.
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    for (int j = 1; j <= n - i; j++) {
      cout << "    ";
    }
    for (int j = 1; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
  for (int i = n; i >= 1; i--) {
    for (int j = 2; j <= i; j++) {
      cout << "* ";
    }
    for (int j = 2; j <= n - i; j++) {
      cout << "    ";
    }
    for (int j = 2; j <= i; j++) {
      cout << "* ";
    }
    cout << endl;
  }
}

int main() {
  int n;
  cin >> n;
  symmetry(n);
  return 0;
}