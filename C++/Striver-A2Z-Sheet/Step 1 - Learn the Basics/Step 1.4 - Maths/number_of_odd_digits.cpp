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