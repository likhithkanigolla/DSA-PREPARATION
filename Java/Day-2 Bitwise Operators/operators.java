//Different Operators AND, NOT, XOR, OR.

import java.util.*;
class operators{
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int x=scn.nextInt(), y=scn.nextInt();
        System.out.println(x&y); //And Gate or And Operator
        System.out.println(x|y); //Or Gate or OR operator
        System.out.println(x^y); //XOR Gate or XOR operator
        System.out.println(~x); //Bitwise Not of x
        System.out.println(~y); //Bitwise Not of y
    }
}
