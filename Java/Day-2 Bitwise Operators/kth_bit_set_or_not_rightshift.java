//Given a number N and a bit number K, check if Kth bit of N is set or not.
//A bit is called set if it is 1. Position of set bit '1' should be indexed starting with 0 from LSB side in binary representation of the number.

import java.util.*;
class Kthbitset{
    public static void setornot(int n,int k) {
    if(((n>>k) & 1) == 1){ 
            System.out.println("Kth Term in N is Having Set");
        }
        else{
            System.out.println("Kth Term in N is not Set");
        }
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int num=scn.nextInt(), term=scn.nextInt();
        setornot(num, term);
        scn.close();
    }
}

