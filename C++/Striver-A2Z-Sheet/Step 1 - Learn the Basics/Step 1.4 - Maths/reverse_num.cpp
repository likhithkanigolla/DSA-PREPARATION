class Solution {
public:
    int reverseNumber(int n) {
        int revNum=0;

        while(n>0){
            int lastDigit=n%10;
            // revNum+=lastDigit;
            n=n/10;
            revNum=revNum*10+ lastDigit;
        }
        
        return revNum;

    }
};