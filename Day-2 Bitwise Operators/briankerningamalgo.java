//when you subract one from the number in the binary representation the zeros after the last set bit number becomes one and last set bit becomes zero
//this is how its works
//n  =40 - 101000 
//n-1=39 - 100111 doing the and of these both two gives 
//         ______
//         100000 = 32 and count increases by 1
//         011111 = 31(n-1:32-1=31)
//         ______
//         000000 = 0 Count increases by two and loop terminates
// This is how the condition works


import java.util.*;
class briankerningamalgo{
    static int countbits(int n){
        int count=0;
        while(n>0){
            n=(n&(n-1));
            count++;
        }
        return count;
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int num=scn.nextInt();
        System.out.println(countbits(num));
        scn.close();
    }
}
