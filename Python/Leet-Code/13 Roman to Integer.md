# Intuition
<!-- Describe your first thoughts on how to solve this problem. -->
At first i thought to split the string into the list using the library strip and i tried it for some reason it didnt worked, I am trying to think the different ways to solve this problem. The came into the mind string itration. Also the second part is how can the value be stored. Best way for this is a dict. 

# Approach
<!-- Describe your approach to solving the problem. -->
The approch i followed is firstly checks the length of the string and then if the loop(i) equals to the length-1 then directly add the value else take the value and next character value and compare them if they are equal or not if yes or greater than then add the value else subract

# Complexity
- Time complexity: $$O(n) - Beats - 7.44%$$
<!-- Add your time complexity here, e.g. $$O(n)$$ -->

- Space complexity: $$O(1) - Beats-75.61$$
<!-- Add your space complexity here, e.g. $$O(n)$$ -->

# Code
```py
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        roman_values = {
            'I': 1,
            'V': 5,
            'X': 10,
            'L': 50,
            'C': 100,
            'D': 500,
            'M': 1000
        }
        result=0
        length=len(s)
        for i in range(length):
            if(i==(length-1)):
                result+=roman_values[s[i]]
            else:
                val1=roman_values[s[i]]
                val2=roman_values[s[i+1]]
                if(val1>=val2):
                    result+=val1
                else:
                    result-=val1
        return result
```
# Best Approch (Time):
```py
class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        
        symbolToValue= {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }

        integerValue = 0
        previousValue = 0

        for char in s:
            currentValue= symbolToValue[char]

            if previousValue < currentValue:
                integerValue += currentValue - 2 * previousValue
            else:
                integerValue += currentValue
            
            previousValue = currentValue


        return integerValue
```

# Best Approch(Space):
```py
class linkedlist(object):
    def __init__(self,symbol,value):
        self.value = value
        self.symbol = symbol

class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        count = 0 
        previous = 0
        list1 = []
        list1 += [linkedlist(symbol, value) for symbol, value in [('I', 1), ('V', 5), ('X', 10), ('L', 50),('C', 100),('D', 500),('M', 1000)]]
        s = list(s) 
        print(list1)
        list_values = [self.mapping_to_class(list1,S) for S in s]
        newlist = []
        x = 0 
        if len(list_values) == 1:
            return(sum(list_values))
        while x <= len(list_values) - 2:
            if list_values[x] < list_values[x+1]:
                newlist.append(list_values[x+1] - list_values[x])
                if x == len(list_values) - 3:
                    newlist.append(list_values[x+2])
                x = x+2
            elif (x+1) == (len(list_values) - 1):
                newlist.append(list_values[x])
                newlist.append(list_values[x+1])
                x = len(list_values)

            else:
                newlist.append(list_values[x])
                x = x + 1


        count = sum(newlist)
        return(count)

    def mapping_to_class(self,list1,value):
        counter = 0
        while value != list1[counter].symbol:
            counter = counter + 1

        return(list1[counter].value)
```