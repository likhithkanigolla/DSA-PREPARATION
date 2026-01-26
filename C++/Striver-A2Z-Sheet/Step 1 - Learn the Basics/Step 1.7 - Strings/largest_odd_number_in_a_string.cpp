#include <iostream>
using namespace std ;

class Solution {
public:
    std::string largeOddNum(std::string& s) {
        // int size_of_the_string = s.size(); // Commented out, good.
        int start_position = 0;
        int end_position = s.size(); // This is where the first potential issue lies with loop logic.

        // This loop correctly handles removing leading zeros from the *entire* string.
        // If the string starts with zeros, start_position will advance past them.
        while (start_position <= end_position && s[start_position] == '0') {
            start_position++;
        }

        // If after removing leading zeros, the string is empty or only contained zeros,
        // and we haven't found an odd number yet, this condition might be tricky.
        // For example, if s = "000", start_position becomes 3, end_position is 3.
        // The next loop condition `end_position > start_position` will be false immediately.

        // This loop finds the last odd digit's position.
        while (end_position > start_position) {
            // (s[end_position-1]-'0')%2!=0 is correct for checking oddness.
            if ((s[end_position - 1] - '0') % 2 != 0) {
                break; // Found the rightmost odd digit, stop searching.
            }
            end_position--; // Move inwards if the current digit is even.
        }

        // This condition is problematic.
        // If end_position == start_position, it means either:
        // 1. The string was empty or all zeros, and start_position advanced to end_position.
        // 2. The loop searched inwards and found no odd digits between start_position and end_position.
        //    In this case, end_position might have become equal to start_position.
        //    If no odd digit is found (e.g., "468"), end_position will decrement until it equals start_position.
        if (end_position == start_position) return ""; // This correctly handles cases like "468" or "000"

        // The substr parameters are the main issue here.
        // s.substr(start_position, end_position - start_position);
        // 'start_position' is correct.
        // The 'count' parameter is `end_position - start_position`.
        // If s = "5043", start_position = 0, end_position becomes 4.
        // Then substr(0, 4 - 0), which is substr(0, 4), returns "5043". Correct.
        // If s = "00543", start_position becomes 2. end_position becomes 5.
        // Then substr(2, 5 - 2), which is substr(2, 3), returns "543". Correct.
        // If s = "10", start_position = 0. end_position = 2.
        // '3' is not present. end_position becomes 1. '0' is even. end_position becomes 0.
        // Now end_position (0) == start_position (0). The `if (end_position == start_position) return "";` handles this.
        // BUT, if s = "1", start_position = 0. end_position = 1.
        // (s[0]-'0')%2 is 1%2 != 0. Break. end_position is 1.
        // substr(0, 1-0) -> substr(0, 1) returns "1". Correct.

        // The issue is subtle: what if the string is like "46812"?
        // start_position = 0. end_position = 5.
        // (s[4]-'0')%2 is 2%2 != 0 -> false. end_position = 4.
        // (s[3]-'0')%2 is 1%2 != 0 -> true. break. end_position = 4.
        // substr(0, 4-0) -> substr(0, 4) returns "4681". This is NOT the largest odd number.
        // The largest odd number is "4681".
        // The problem is that `end_position` is the index of the *last odd digit*.
        // The substring should be from `start_position` up to and *including* `end_position`.
        // The count for substr should be `end_position - start_position + 1`.

        return s.substr(start_position, end_position - start_position);
    }
};

int main() {
    Solution sol;
    std::string s = "5043";
    std::string result = sol.largeOddNum(s);
    std::cout << "The largest odd number that can be formed is: " << result << std::endl;
    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the length of the input string. We traverse the string a constant number of times.
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'start_position' and
// 'end_position'. The space used for the output string does not count towards extra space complexity
