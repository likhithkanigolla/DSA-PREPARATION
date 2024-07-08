# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
When i read the question i felt easy but when started thinking about the logic i am stuck. I am sure that i need to itrate the words and strings in the words, but i am so confused that which goes first. So at start i sorted the list and took the first word and then started solving. I tried to remove the second for loop to make it less complex but it is not happened. 

# Approach
<!-- Describe your approach to solving the problem. -->
My approch started in a way where i took the list and sorted it, then started enurmuating with the length of the first word in the list. And my second loop is to itreate the words. Now comparing whether the letter at the i th index is same or not in the word if yes add the word else pass. But this approch didn't worked it gave me the all the letters some how i need to add the letter outside of the loop. So i reversed the condition where if the word is not same then return the res and added outside of the for loop. And it worked. Later to reduce run time removed the default function sorted and then added condition to the if that if the len of the word is equal i then return because the word cant be bigger than the smallest word in the list. 

# Learnings 
- To print N characters in a string we can write **string[:N]**
- List of words can be itrated in a list by **for words in list**
- We can make sorted list based on the length of words by **sorted_list=sorted(list, key=len)**
- word can be found in list by **if word in list**

# Complexity
- Time complexity: $$O(N*M) - Beats - 33.59%$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1) - Beats-17.44$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```py
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        # sorted_l=sorted(strs, key=len)
        res=""
        for i in range(len(strs[0])):
            for word in strs:
                if (i==len(word) or word[i]!=strs[0][i]):
                    return res
            res+=strs[0][i]
        return res
```
# Best Approch (Time):
```py
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        ans = ''
        strs = sorted(strs)
        first = strs[0]
        last = strs[-1]

        for i in range (min(len(first), len(last))):
            if (first[i] != last[i]):
                return ans
            ans += first[i]
        
        return ans
```

# Best Approch(Space):
```py
class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        m,n = len(strs), len(strs[0])
        res = ""
        for i in range(n):
            c = strs[0][i]
            for j in range(m):
                if len(strs[j])== i: return res;
                if strs[j][i] != c: return res;
                if j==m-1: res += c
        return res

```