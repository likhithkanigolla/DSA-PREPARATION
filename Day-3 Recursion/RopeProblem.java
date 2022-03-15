/*We are doing the caluctaion for the
here what recursion does is we take the input and subracts with the a,b,c and again it goes into the recursion again with the a,b,c values if the final value becomes negirive
that means the solution is not possible if the solution returns the  that means it is a possible cut. and that how all the thing will work 
*/



import java.io.*;
import java.util.*;

class GFG {

	
	static int maxCuts(int n, int a, int b, int c)
	{
		if(n == 0)
			return 0;
		if(n <= -1)
			return -1;

		int res = Math.max(maxCuts(n-a, a, b, c), Math.max(maxCuts(n-b, a, b, c), maxCuts(n-c, a, b, c)));

		if(res == -1)
			return -1;

		return res + 1; 
	}
    public static void main(String [] args) 
    {
    	int n = 5, a = 2, b = 1, c = 5;
    	
    	System.out.println(maxCuts(n, a, b, c));
        
    }

}
