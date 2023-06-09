//coversion celciustofarenheit

import java.util.*;

class Main{
    static double far;
    public static void main(String[] args){
        Scanner scn= new Scanner(System.in);
        float cel= scn.nextInt();
        far=(cel*1.8)+32;
        System.out.println(far);
    }
}
