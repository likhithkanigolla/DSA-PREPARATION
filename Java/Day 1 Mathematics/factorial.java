import java.util.*;

class Main{
    
    public static long factorial(long n) {
        long fac=1,i;
        for(i=n;i>1;i--){
            fac=fac*i;
        }
        return(fac); 
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        long n=scn.nextLong();
        System.out.println(factorial(n));
    }
}
