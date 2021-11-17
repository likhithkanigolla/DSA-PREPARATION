import java.util.*;
class nofbits{
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        int num=scn.nextInt(),count=0;
        while(num>0){
            if(num%2!=0){
                count++;
            }
            num=num/2;
        }
        System.out.println(count);
        scn.close();
    }
}
