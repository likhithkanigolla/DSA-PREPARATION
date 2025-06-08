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