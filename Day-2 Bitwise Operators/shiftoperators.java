import java.util.*;
class shifoperators{
    public static void main(String[] args){
        Scanner scn= new Scanner(System.in); //scanner started
        int positive_num=scn.nextInt(), negitive_num=scn.nextInt();
        int shift=scn.nextInt();
        System.out.println(shift<<positive_num); //leftshift operator postive number
        System.out.println(shift<<negitive_num); //leftshift operator negitive number
        System.out.println(shift>>positive_num); //rightshift operator positive number
        System.out.println(shift>>negitive_num); //rightshift operator negitive number(unsigned operator)
        System.out.println(shift>>>negitive_num); //rightshift operator negitive number(Signed operator)
        scn.close(); //scanner closed
    }
}
