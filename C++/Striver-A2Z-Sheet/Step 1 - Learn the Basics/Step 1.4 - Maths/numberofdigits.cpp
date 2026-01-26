// Logarithmic Approach
#include <cmath>

int countDigitsLogarithmic(int n) {
    if (n == 0) return 1;
    return floor(log10(n)) + 1;
}

// Iterative Division
int countDigitsIterative(int n) {
    if (n == 0) return 1;
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

// Recursive Division
int countDigitsRecursive(int n) {
    if (n == 0) return 1;
    if (n < 10) return 1;
    return 1 + countDigitsRecursive(n / 10);
}

// String Conversion
#include <string>

int countDigitsString(int n) {
    return std::to_string(n).length();
}

// Complexity Analysis for all approaches:
// Time Complexity:
// 1. Logarithmic Approach: O(1) for the logarithmic calculation.
// 2. Iterative Division: O(D) where D is the number of digits in
//    n, as we divide n by 10 until it becomes 0.
// 3. Recursive Division: O(D) where D is the number of digits in
//    n, as we make a recursive call for each digit.
// 4. String Conversion: O(D) where D is the number of digits in
//    n, as converting to string involves processing each digit.
// Space Complexity: O(1) for all approaches except Recursive Division,
// which has O(D) space complexity due to the recursion stack.

