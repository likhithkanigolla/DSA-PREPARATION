#include <iostream>
using namespace std; 

long double factorial(int n){
    if (n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int digits_of_a_factorial(int n){
    long double fact = factorial(n);
    int count=0;
    if(n==0){
        return 0;
    }
    if(n<=1){
        return 1;
    }
    while(fact>1){
        fact/=10;
        count++;
    }
    return count;
}


int main(){
    int n; 
    cout<<"Enter a number: ";
    cin >> n;
    cout<<"Factorial of n is: "<< factorial(n)<<endl;
    cout<< "No of Digits in factorial of "<<n<<" is "<< digits_of_a_factorial(n)<<endl;
}