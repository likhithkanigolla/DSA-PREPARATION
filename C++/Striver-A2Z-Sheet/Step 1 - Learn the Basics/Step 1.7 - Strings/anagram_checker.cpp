#include <iostream>
#include <unordered_map>
using namespace std;

class Solution{	
	public:
		bool anagramStrings(string& s,string t){
			//your code goes here
            // Edge Case
            if(s.length()!=t.length()) return false;
            // Frequency Checkers

            unordered_map<char,int> s_frequency_checker;
            unordered_map<char,int> t_frequency_checker; 

            // Count frequencies of characters in both strings
            for(char c:s){s_frequency_checker[c]++;}
            for(char c:t){t_frequency_checker[c]++;}

            return s_frequency_checker==t_frequency_checker;
		}
};

class AnotherSolution {
public:
    bool anagramStrings(string &s, string &t) {
        // Edge Cases
        if (s.length() != t.length()) return false;

        // To store the count of each character
        vector<int> count(26, 0);

        // Count occurence of each character in first string 
        for (char c : s) count[c - 'a']++;

        // Decrement the count for each character in the second string
        for (char c : t) count[c - 'a']--;

        // Check for count of every character
        for (int i : count) {
            // If the count is not zero
            if (i != 0) return false; // Return false
        }

        // Otherwise strings are anagram
        return true;
    }
};

int main() {
    Solution sol;
    AnotherSolution anotherSol;
    string s = "listen";
    string t = "silent";
    bool result = sol.anagramStrings(s, t);
    bool anotherResult = anotherSol.anagramStrings(s, t);
    if (result) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}

// Complexity Analysis for both approaches:
// Time Complexity: O(N)
// Where N is the length of the strings. We traverse each string once to count character frequencies
// Space Complexity: O(1)
// Since the character set is fixed (e.g., lowercase English letters), the space used for frequency counting
// does not scale with input size and is considered constant space.

// Comparison of Valid Anagram Solutions
// Here's a breakdown of each solution's strengths and weaknesses:

// Solution 1: Using Two Hash Maps (std::unordered_map)
// Strengths
// Readability and Generality: This approach is very intuitive. It directly models the definition of an anagram: two strings are anagrams if they have the same characters with the same frequencies. It's also more general and can easily handle strings with characters beyond lowercase English letters (e.g., uppercase, numbers, symbols) without modification, as std::unordered_map can use any character as a key.
// Direct Comparison: The s_frequency_checker == t_frequency_checker comparison is clean and leverages the overloaded equality operator for std::unordered_map, which checks if both maps have the same keys and associated values.
// Weaknesses
// Space Complexity: It uses two hash maps, each potentially storing up to N unique characters (where N is the length of the string). In the worst case (all characters unique), this is O(N) space for each map, leading to O(N) total space.
// Slightly More Overhead: Hash map operations, while usually O(1) on average, can have more overhead than array accesses due to hashing and collision handling.
// Solution 2: Using a Frequency Array (std::vector<int>)
// Strengths
// Space Efficiency (for ASCII/Limited Character Sets): If you know your input strings will only contain lowercase English letters (or a similarly limited character set like ASCII), this approach is extremely space-efficient. A std::vector<int> of size 26 (for lowercase letters) or 128/256 (for ASCII) will always have a fixed size, regardless of the input string length. This makes its space complexity O(1) (constant), which is superior to O(N) for large strings.
// Time Efficiency: Array access (count[c - 'a']) is guaranteed O(1) and generally has less overhead than hash map operations. A single pass to increment and another single pass to decrement/check makes the time complexity O(N).
// Conciseness of Logic: The idea of incrementing for one string and decrementing for the other, then checking for zeros, is a clever and efficient way to compare frequencies.
// Weaknesses
// Limited Character Set: This solution is specifically tailored for a limited character set (like lowercase English letters). If the strings could contain uppercase letters, numbers, or other symbols, you would need to adjust the array size and the indexing logic (c - 'a') significantly, or switch to a hash map.
// Less Direct Mapping to Definition: While efficient, the decrement-and-check-for-zero logic is slightly less immediately intuitive than directly comparing two frequency maps.
// Which is "Good"?
// Both are excellent solutions. The choice depends on the constraints and expected input of the problem:

// If the problem guarantees only lowercase English letters (or a small, fixed character set):

// Solution 2 (Frequency Array) is generally preferred for its superior space complexity (O(1) vs O(N)) and potentially better time performance due to lower overhead. It's a classic optimization for this specific scenario.
// If the strings can contain any characters (uppercase, numbers, symbols, Unicode):

// Solution 1 (Two Hash Maps) is the more robust and flexible choice. It will work correctly without modification for any character set. While its space complexity is O(N), it's often acceptable, and the code's generality is a significant advantage.
// In a typical coding interview scenario where the character set might not be explicitly defined or could be broad, Solution 1 (using unordered_map) is safer and demonstrates a good understanding of general-purpose data structures. However, if the constraints (like "only lowercase English letters") are clearly stated, Solution 2 is a more optimized and often expected answer.

// Conclusion:

// For optimal space efficiency and speed on limited character sets: Solution 2 is better.
// For generality and robustness across all character sets: Solution 1 is better.
// Both are perfectly valid and "good" solutions.



