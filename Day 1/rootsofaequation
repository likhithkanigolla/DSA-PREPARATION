//ax2 + bx + c

import java.util.*;
class main{
    public static void main(String[] args){
        Scanner scn= new Scanner(System.in);
        double a=scn.nextInt(),b=scn.nextInt(),c=scn.nextInt();
        double r1,r2;
        double det=(b*b)-(4*a*c);
        if(det==0){
            r1=r2=(-b/(2*a));
            System.out.println(r1+" "+r2);
        }
        else if(det>0){
            r1=((-b+Math.sqrt(det))/2*a);
            r2=((-b-Math.sqrt(det))/2*a);
            if(r1>r2){
                System.out.println(r1+" "+r2);
            }
            else{
                System.out.println(r2+" "+r1);
            }
        }
        else{
            System.out.println("Imaginary");
        }
    }
}
