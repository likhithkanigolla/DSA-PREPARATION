// Brute Force (Digit Counting in Range)
int digitsCount(int d, int low, int high) {
    int count = 0;
    for (int num = low; num <= high; ++num) {
        int temp = num;
        if (temp == 0 && d == 0) count++;
        while (temp > 0) {
            if (temp % 10 == d) count++;
            temp /= 10;
        }
    }
    return count;
}

// Digit Extraction (Odd Digit Count)
int countOddDigit(int n) {
    int oddDigits = 0;
    while (n > 0) {
        int lastDigit = n % 10;
        if (lastDigit % 2 != 0) {
            oddDigits++;
        }
        n /= 10;
    }
    return oddDigits;
}

// Logarithmic Approach (Total Digits)
#include <cmath>
int countDigit(int n) {
    if (n == 0) return 1;
    return floor(log10(abs(n))) + 1;
}

// Complexity Analysis for all approaches:
// Time Complexity:
// 1. Brute Force: O(N * D) where N is the range size (high - low + 1) and D is the number of digits in the largest number.
// 2. Digit Extraction: O(D) where D is the number of digits in n
// 3. Logarithmic Approach: O(1) for the logarithmic calculation, but O(D) to extract digits if needed.
// Space Complexity: O(1) for all approaches as they use a constant amount of extra
// space regardless of input size.
