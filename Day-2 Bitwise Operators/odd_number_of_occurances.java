//odd number of occurances in a array
import java.util.*;
class oddoccur{
    public static int odd(int arr[], int n) {
        for(int i=0;i<n;i++){
            int count=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]){
                    count++;
                }
            }
            if(count%2!=0){
                return arr[i];
            }
        }
        return 0;
    }
    public static void main(String[] args) {
        Scanner scn=new Scanner(System.in);
        
        System.out.print("Enter Array Size:");
        int n=scn.nextInt(); //Input Array Size
        
        System.out.print("Enter Array Elements:");
        int array[] = new int[n]; //defined array with size n
        
        for(int i=0;i<n;i++){
            array[i]=scn.nextInt();
        }//Input of array numbers 
        
        System.out.print("Number is:");
        System.out.println(odd(array,n));
        
        scn.close();
        
    }
}
