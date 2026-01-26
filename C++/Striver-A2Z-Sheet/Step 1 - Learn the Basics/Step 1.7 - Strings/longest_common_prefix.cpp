#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Required for std::min if you want to use it

class Solution {
public:
    // Function to find the longest common prefix among a vector of strings.
    std::string longestCommonPrefix(std::vector<std::string>& str) {
        // Edge case: If the input vector is empty, return an empty string.
        if (str.empty()) {
            return "";
        }

        // Initialize 'smallest' with the length of the first string.
        // This variable will track the length of the shortest string encountered.
        int smallest = str[0].length();

        // 'prefix' will store the result, starting as an empty string.
        std::string prefix = "";

        // Find the length of the shortest string in the vector.
        // This ensures we don't go out of bounds when comparing characters.
        for (const std::string& element : str) { // Using const reference for efficiency
            if (smallest > element.length()) {
                smallest = element.length();
            }
            // Alternatively, using std::min:
            // smallest = std::min(smallest, (int)element.length());
        }

        // Iterate through each character position, from the beginning up to the length of the shortest string.
        for (int i = 0; i < smallest; ++i) {
            // For the current character position 'i', check against all strings in the vector.
            for (const std::string& element : str) { // Using const reference for efficiency
                // Compare the character at position 'i' in the first string (str[0][i])
                // with the character at position 'i' in the current string ('element[i]').
                if (str[0][i] != element[i]) {
                    // If a mismatch is found, it means the common prefix ends before this character.
                    // Return the 'prefix' accumulated so far.
                    return prefix;
                }
            }
            // If the inner loop completes without finding any mismatches,
            // it means the character str[0][i] is common to all strings at this position.
            // Append this common character to our 'prefix'.
            prefix += str[0][i];
        }

        // If the outer loop completes, it signifies that all characters up to 'smallest' length
        // were common across all strings. The 'prefix' now holds the longest common prefix.
        return prefix;
    }
};

int main() {
    Solution sol;
    std::vector<std::string> strs = {"flower", "flow", "flight"};
    std::string result = sol.longestCommonPrefix(strs);
    std::cout << "The longest common prefix is: " << result << std::endl;
    return 0;
}


// Complexity Analysis:
// Time Complexity: O(N * M)
// Where N is the number of strings in the vector and M is the length of the shortest string.
// In the worst case, we may need to compare each character of the shortest string with all
// other strings, leading to a time complexity of O(N * M).
// Space Complexity: O(1)
// We are using only a constant amount of extra space for variables like 'smallest' and
// 'prefix'. The space used for the output string 'prefix' does not count towards
// auxiliary space complexity as it is part of the output.
// Note: If you consider the space used by the output string 'prefix', then the space
// complexity would be O(M), where M is the length of the longest common prefix.
