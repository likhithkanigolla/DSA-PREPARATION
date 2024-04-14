#include <iostream>
using namespace std; 

unsigned long long int factorial(int n){
    if(n==1){
        return 1; 
    }
    return n*factorial(n-1);
}

//  This wont work for big numbers 
int trailing_zeros_naive(int n){
    int count=0;
    unsigned long long int fact = factorial(n);
    cout<<"Factorial is: "<<fact<<endl;
    while(fact>1){
        if(fact%10==0){
            fact=fact/10;
            count++;
        }
        else{
            break;
        }
    }
    return count;
}


// Efficient Meathod
// The idea is to consider prime factors of a factorial n. A trailing zero is always produced by prime factors 2 and 5. Our task is done if we can count the number of 5s and 2s. Consider the following examples:

// n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5). So a count of trailing 0s is 1.
// n = 11: There are two 5s and eight 2s in prime factors of 11! (28 * 34 * 52 * 7 * 11). So the count of trailing 0s is 2.
// We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. So if we count 5s in prime factors, we are done.

// Following is the summarized formula for counting trailing 0s:

// Trailing 0s in n! = Count of 5s in prime factors of n! = floor(n/5) + floor(n/25) + floor(n/125) + ....
// So here we need to divide it by the multiples of 5 

int trailing_zeros(int n){
    int count = 0; 
    if(n<=0){
        return -1;
    }
    for ( int i = 5 ; n/i>=1 ; i*=5 ){
        count = count +(n/i); 
    }
    return count;
}


int main(){
    int n; 
    cout<< " Enter a number you want factorial: "; 
    cin >> n; 
    cout<<trailing_zeros(n) <<endl;
}