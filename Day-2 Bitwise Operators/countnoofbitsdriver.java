import java.util.*;
class nofbits{

   static int countbits(int n){
    int count=0;
    while(n>0){
        if(n%2!=0)
            count++;
        n=n/2;
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
