class Solution {
   public:
    bool isPalindrome(int n) {
        int revNum = 0;
        int originalNum = n;

        while (n > 0) {
            int lastDigit = n % 10;
            // revNum+=lastDigit;
            n = n / 10;
            revNum = revNum * 10 + lastDigit;
        }

        return originalNum==revNum;
    }
};