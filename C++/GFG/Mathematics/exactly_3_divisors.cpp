#include <iostream>
using namespace std; 
// Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.
// N = 6
// Output: 1
// Explanation: The only number less than 6 with 
// 3 divisors is 4 which has 1, 2 and 4 as divisors.
// Example 2:
// Input:
// N = 10
// Output: 2
// Explanation: 4 and 9 have 3 divisors.

int exactly_3_divisors(int n){
    int count=0;
    for (int i=1; i<=n; i++){
        // if(no_of_divisors(i)==3){
        //     count++;
        // }
        int state=0;
        for (int j=2;j<=i/2;j++){
            if(i%j==0){
                state++;
                count++;
                if(state==2){
                    count--;
                    count--;
                    break;
                }
            }

        }
    }
    return count;
}

// Efficient code starrt 
    bool isPrime(int n)
    {
        if (n == 0 || n == 1)
        return false;
         
        for(int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            return false;
        }
        return true;
    }
    int exactly3Divisors_eff(int n)
    {
        int count=0;
        // Now if only 3 divisors should be there then it is square root of the number
        // If i * i is less than or equal to n, it increments the count. This is because i * i is a perfect square of a prime number, and thus has exactly 3 divisors.
        for(int i=2;i*i<=n;i++)
        {
            if(isPrime(i))
            {
                if(i*i<=n)
                count++;
            }
        }
        return count;
    }
    // Efficient code end 


int main(){
    int n; 
    cout<< " Enter a number:"; 
    cin>> n;
    cout<<exactly_3_divisors(n)<<endl;
}