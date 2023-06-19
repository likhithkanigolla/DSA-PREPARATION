#include <iostream>
using namespace std;

int main() {
    int number, digit, sumEven = 0, sumOdd = 0;

    // Input number
    
    std::cin >> number;

    // Calculate sum of even and odd digits
    while (number != 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            sumEven += digit;
        } else {
            sumOdd += digit;
        }
        number /= 10;
    }

    // Output sums
    cout<< sumEven <<" "<<sumOdd;

    return 0;
}