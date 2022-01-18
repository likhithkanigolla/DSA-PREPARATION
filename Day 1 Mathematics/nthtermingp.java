import java.util.*;

class Main{
    public static double gp(int a,int b,int n) {
        double r= ((double)b)/a;
        return(a*Math.pow(r, n-1));
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int a=scn.nextInt();
        int b=scn.nextInt();
        int n=scn.nextInt();
        System.out.println(gp(a, b, n));
        scn.close();
    }
}
