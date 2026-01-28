#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm> // For sort
#include <utility>   // For pair

using namespace std;

class Solution {
public:
    // Static comparison function for sorting pairs.
    // Sorts by frequency descending, then by character ascending for ties.
    static bool cmp(const pair<char, int>& a, 
                    const pair<char, int>& b) 
    { 
        // If frequencies are different, sort by frequency in descending order.
        if (a.second != b.second) {
            return a.second > b.second; 
        }
        // If frequencies are the same, sort by character in ascending alphabetical order.
        return a.first < b.first; 
    } 

    vector<char> frequencySort(string& s) {
        // 1. Count character frequencies using an unordered_map for efficiency.
        unordered_map<char, int> frequency_counter;
        for (char c : s) {
            frequency_counter[c]++;
        }

        // 2. Transfer map contents to a vector of pairs.
        // This vector will hold {character, frequency}.
        vector<pair<char, int>> sorted_characters_with_frequency;
        for (const auto& pair : frequency_counter) {
            sorted_characters_with_frequency.push_back(pair);
        }

        // 3. Sort the vector of pairs using the static cmp function.
        sort(sorted_characters_with_frequency.begin(), sorted_characters_with_frequency.end(), Solution::cmp);

        // 4. Construct the final result vector<char> based on the sorted frequencies.
        vector<char> result_chars; // This will be our vector<char> to return.
        for (const auto& pair : sorted_characters_with_frequency) {
            char character = pair.first;
            int frequency = pair.second;
            // Append the character 'frequency' times to the result vector.
            // The incorrect 'if' condition has been removed.
            for (int i = 0; i < frequency; ++i) {
                result_chars.push_back(character);
            }
        }

        // Return the correctly constructed vector<char>.
        return result_chars;
    }
};


int main() {
    Solution solution;
    string input = "tree";
    vector<char> sorted_chars = solution.frequencySort(input);

    cout << "Sorted characters by frequency: ";
    for (char c : sorted_chars) {
        cout << c;
    }
    cout << endl;

    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N+UlogU), where N is the length of the input string s, and U is the number of unique characters in s.

// Counting frequencies: O(N) because we iterate through the string once. unordered_map operations are amortized O(1).
// Transferring to vector: O(U).
// Sorting the vector of pairs: O(UlogU) because there are U unique characters.
// Constructing the result: O(N) because each character from the original string is appended exactly once to the result_chars vector.
// Overall, if U is much smaller than N (e.g., fixed alphabet size), it's dominated by O(N). If U is close to N, it's closer to O(NlogN).
// Space Complexity: O(U), where U is the number of unique characters.

// The unordered_map stores up to U entries.
// The vector<pair<char, int>> also stores U pairs.
// The result_chars vector stores N characters in the end.
// Therefore, the space complexity is O(U+N). Since U≤N, it simplifies to O(N) in the worst case. If we consider the output vector as part of the space complexity, it's O(N). If we only consider auxiliary space excluding the output, it's O(U).

// Edge Cases: 
// Empty Input String (s is empty):

// frequency_counter will be empty.
// sorted_characters_with_frequency will be empty.
// result_chars will be empty.
// The function will correctly return an empty vector<char>.
// String with a Single Character (e.g., "a"):

// frequency_counter will be {'a': 1}.
// sorted_characters_with_frequency will be [{'a', 1}].
// result_chars will become ['a'].
// Correctly returns ['a'].
// String with All Same Characters (e.g., "aaaa"):

// frequency_counter will be {'a': 4}.
// sorted_characters_with_frequency will be [{'a', 4}].
// result_chars will become ['a', 'a', 'a', 'a'].
// Correctly returns ['a', 'a', 'a', 'a'].
// String with Characters of Same Frequency (e.g., "ccaa"):

// frequency_counter will be {'c': 2, 'a': 2}.
// sorted_characters_with_frequency will be sorted like [{'a', 2}, {'c', 2}] due to alphabetical tie-breaking.
// result_chars will become ['a', 'a', 'c', 'c'].
// Correctly returns ['a', 'a', 'c', 'c'].
// String with Mixed Case and Symbols: If the problem allowed for this, unordered_map handles it gracefully. For example, "Aabb11" would result in {'A': 1, 'a': 1, 'b': 2, '1': 2}. Sorting would then produce ['1', '1', 'b', 'b', 'A', 'a'] (assuming '1' < 'A' < 'a' in ASCII, which is true. If the problem specified only alphabetic characters, you'd filter out '1').

