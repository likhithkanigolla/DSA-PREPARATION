# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
At First i thought the approch of solving it by dividing the numbers into and array of numbers and compare the array. After trying to look back at the approches i tried before, the approch i followed before is reversing the number (by diving with 10 and joining back). Here are the steps. 

Example n = 2002

itration 1 -> remainder(2002%10)  = 2 -> reverse = 0*10 + 2 = 2, n = 2002/10 = 200 ||
itration 2 -> remainder(200%10)  = 0 -> reverse = 2*10 + 0 = 20, n = 200/10 = 20 ||
itration 3 -> remainder(20%10)  = 0 -> reverse = 20*10 + 0 = 200, n = 20/10 = 2 ||
itration 4 -> remainder(2%10)  = 2 -> reverse = 200*10 + 2 = 2002, n = 2/10 = 0 


# Approach
<!-- Describe your approach to solving the problem. -->
But after looking at the testcases it should be able to solve for the negitive numbers also. So though of converting the number into the string and reverse the string using the slice statement [::-1] means start at the end of the string and end at position 0, move with the step -1, negative one, which means one step backwards. And then match the string, return the bool value. 


# Complexity
- Time complexity: $$O(1)- Beats -66.99$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1) - Beats - 22.66% $$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```py
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        return str(x)[::-1]==str(x)
        
```
# Best Approch (Time)
```py
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        if x < 0 or (x % 10 == 0 and x != 0):
            return False

        ogNum = x
        reversedNum = 0
        while x > 0:
            lastDigit = x % 10
            reversedNum = reversedNum * 10 + lastDigit
            x //= 10

        return ogNum == reversedNum   
```

# Best Approch (Space)
```py
class Solution(object):
    def isPalindrome(self, x):
        """
        :type x: int
        :rtype: bool
        """
        x = str(x)
        L = 0
        R = len(x)-1

        while L < R:

            if x[L] != x[R]:
                return False
            L += 1
            R -= 1
        return True
```