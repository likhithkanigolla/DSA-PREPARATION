#include <iostream>
#include <unordered_map>
#include <unordered_set>
using namespace std;

class Solution {
public:
    bool isomorphicString(string s, string t) {

        // Initialize data structures:
        //    - mapper_s_to_t: Maps characters from s to characters in t.
        //    - mapped_chars_in_t: Records characters in t that have already been used as a mapping target.
        unordered_map<char, char> mapper_s_to_t;
        unordered_set<char> mapped_chars_in_t;

        int length_of_the_string = s.length();
        // Iterate through the strings character by character.
        for (int i = 0; i < length_of_the_string; ++i) {
            char char_s = s[i];
            char char_t = t[i];

            // Check existing mapping for char_s.
            if (mapper_s_to_t.count(char_s)) {
                // If char_s is already mapped, verify its mapping.
                // If the existing mapping in the map doesn't match the current char_t, it's not isomorphic.
                if (mapper_s_to_t[char_s] != char_t) {
                    return false; // Inconsistent mapping
                }
                // If it matches, continue to the next character.
            } else {
                // If char_s is NOT mapped yet, check if char_t has already been mapped to by another character.
                if (mapped_chars_in_t.count(char_t)) {
                    // If char_t is already a target for a different char from s, then it's not one-to-one.
                    return false; // char_t is already used by another character from s
                }

                // Establish the new mapping:
                //    - Add the mapping from char_s to char_t.
                //    - Record char_t as a used target character.
                mapper_s_to_t[char_s] = char_t;
                mapped_chars_in_t.insert(char_t);
            }
        }

        // If the loop completes, all characters have a consistent, one-to-one mapping.
        return true;
    }
};

int main() {
    Solution sol;
    string s = "egg";
    string t = "add";
    bool result = sol.isomorphicString(s, t);
    if (result) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }

    string s2 = "foo";
    string t2 = "bar";
    result = sol.isomorphicString(s2, t2);
    if (result) {
        cout << "The strings are isomorphic." << endl;
    } else {
        cout << "The strings are not isomorphic." << endl;
    }

    return 0;
}

// Complexity Analysis:
// Time Complexity: O(N)
// Where N is the length of the input strings. We traverse each character once.
// Space Complexity: O(1)
// We use two data structures (a map and a set) that can hold at most
// 26 entries each (for lowercase English letters). Thus, the space used
// does not scale with input size and is considered constant space.

