// Power of two or not
//Example 6 is false and 4 is true

import java.util.*;
class poweroftwo{
 public static boolean power(int n){
    if(n==0)
        return true;
    return((n & (n-1))==0);
 }
 public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int n = scn.nextInt();
    System.out.println(power(n));
    scn.close();
 }
}
