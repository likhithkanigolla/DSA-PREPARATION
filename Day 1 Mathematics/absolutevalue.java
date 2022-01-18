//absolute value means -55 will comes as 55

import java.util.*;

class Main{
    public static void main(String[] args){
        Scanner scn=new Scanner(System.in);
        int n=scn.nextInt();
        if(n>=0){
            System.out.println(n);
        }
        else{
            System.out.println("Absolute Value is "+n*-1);
        }
    }
}
