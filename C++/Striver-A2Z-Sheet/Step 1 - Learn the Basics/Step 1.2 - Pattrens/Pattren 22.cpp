// Problem statement
// Ninja has been given a task to print the required pattern and he asked for your help with the same.

// You must print a matrix corresponding to the given number pattern.

// Example:
// Input: ‘N’ = 4

// Output: 

// 4444444
// 4333334
// 4322234
// 4321234
// 4322234
// 4333334
// 4444444

#include <iostream>
using namespace std;

void getNumberPattern(int n) {
  // Write your code here.
  int temp = n;
  for (int i = 1; i <= ((2 * n) - 1); i++) {
    if (i == 1 || i == ((2 * n) - 1)) {
      for (int j = 1; j <= (2 * n) - 1; j++) {
        cout << n;
      }
      cout << endl;
    } else {

      if (i > n) {
        temp--;
        for (int j = 0; j < temp; j++) {
          cout << n - j;
        }
        for (int j = 1; j <= (2 * (n - temp)); j++) {
          cout << (n - temp + 1);
        }
        for (int j = temp - 1; j > 0; j--) {
          cout << n - j + 1;
        }
        cout << endl;
      } else {
        for (int j = 0; j < i; j++) {
          cout << n - j;
        }
        for (int j = 1; j <= (2 * (n - i)); j++) {
          cout << (n - i + 1);
        }
        for (int j = i - 1; j > 0; j--) {
          cout << n - j + 1;
        }
        cout << endl;
      }
    }
  }
}

void getNumberPatternInSimple(int n) {
    int size = 2 * n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            int minDistance = min(min(i, j), min(size - i - 1, size - j - 1));
            cout << n - minDistance;
        }
        cout << endl;
    }
}

// Explanation
// Outer Loop (i): Runs from 0 to 2*n - 2 (i.e., size - 1).
// Inner Loop (j): Runs from 0 to 2*n - 2 (i.e., size - 1).
// Min Distance Calculation: The value at any position (i, j) in the matrix is determined by the minimum distance from the edge of the matrix. This can be calculated as min(i, j, size - i - 1, size - j - 1).
// Pattern Value: Subtracting this minimum distance from n gives the value to be printed.
// Time Complexity
// Original Code: The original code involves multiple nested loops, and the complexity of generating each row is a bit convoluted due to the multiple conditions. The overall time complexity is still O(n^2) because you are iterating through a matrix of size (2n-1) x (2n-1).
// Simplified Code: The optimized code also has a time complexity of O(n^2). It iterates through the same number of elements, but the logic is simpler and more efficient.

int main() {
  int n;
  cin >> n;
  getNumberPattern(n);
  return 0;
}


