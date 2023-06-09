// Power of two or not
//Example 6 is false and 4 is true
// Let the example is 6. Goes into while loop since its not equal to 1 and the determinent which is zero so
// 6=6/2=3 and then checking again determinent is 1 returns false 

import java.util.*;

class poweroftwo{
    public static boolean twopower(int n){
        if(n == 0) // checking the number if 0
        return true;

        while(n!=1){ // checking the number is not equal to 1 because 2 power 0 is 1 and returns true
            if(n%2!=0) //checking whether determinent of two is zero or not if its not zero that means flase
            return false;
            n= n/2; // dividing the number by 2 and keeping again in loop
        }
        return true;    
    }
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        System.out.println(twopower(n));
        scn.close();
    }
}
