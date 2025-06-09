#include <iostream>
#include <string>
#include <algorithm>
#include <stack>

class Solution {
public:
    // 1. String Conversion
    int reverseNumberString(int n) {
        std::string s = std::to_string(n);
        std::reverse(s.begin(), s.end());
        try {
            return std::stoi(s);
        } catch (const std::out_of_range& ex) {
            return 0; // Handle overflow
        }
    }

    // 2. Using Stacks
    int reverseNumberStack(int n) {
        std::stack<int> digits;
        while (n > 0) {
            digits.push(n % 10);
            n /= 10;
        }
        int revNum = 0;
        int i = 1;
        while (!digits.empty()) {
            revNum = revNum * 10 + digits.top();
            digits.pop();
        }
        return revNum;
    }

    // 3. Recursion
    int reverseNumberRecursive(int n, int reversed = 0) {
        if (n == 0) {
            return reversed;
        }
        int lastDigit = n % 10;
        reversed = reversed * 10 + lastDigit;
        return reverseNumberRecursive(n / 10, reversed);
    }
};

int main() {
    Solution sol;
    int num = 12345;

    std::cout << "Original Number: " << num << std::endl;
    std::cout << "Reversed (String): " << sol.reverseNumberString(num) << std::endl;
    std::cout << "Reversed (Stack): " << sol.reverseNumberStack(num) << std::endl;
    std::cout << "Reversed (Recursive): " << sol.reverseNumberRecursive(num) << std::endl;

    return 0;
}