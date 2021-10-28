import java.util.*;
class Kthbitset{
    public static void setornot(int n,int k) {
        //here we are converting the number to the binary and shifting the 1 N-1 times.
        // What we are doing here is 1 means 001 and lets assume k is 2 which means we need to check whether 2nd position from the left is set or not.
        //lets assume n is 4 so if we convert binary we will get 100
        //now we need to check whether second position is set or not so according to and condition 1 and 1 is only 1
        //moving the 1 to left which gives us 010 and doing AND with 100 which gives 000 which is 0 so its unset
        if((n & (1<<k-1))!=0){ 
            System.out.println("Kth Term in N is Having Set");
        }
        else{
            System.out.println("Kth Term in N is not Set");
        }
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int num=scn.nextInt(),term=scn.nextInt();
        setornot(num, term);
        scn.close();
    }
}
