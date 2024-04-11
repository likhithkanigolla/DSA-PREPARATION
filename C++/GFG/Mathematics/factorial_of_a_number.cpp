#include <iostream>
using namespace std; 

int factorial(int n){
    int fact=1;
    // Validations 
    if (n == 0){
        cout << "Error !!! Please give a number greater than 0";
    }
    if ( n < 0){
        cout<< " Negitive Number given as input so converting it into postive";
        n= abs(n);
    }
    if (n == 1){
        return 1;
    }
    // Main Code 
    for ( int i = 1 ; i<=n; i++ ){
        fact *= i ;
    }
    return fact;
}

int factorial_appr2(int n){
    if (n > 1){
        return n * factorial_appr2(n-1);
    }
    else{
        return 1;
    }
}

int main(){
    int n; 
    cout << "Enter a Number:";
    cin >> n; 
    cout << "Factorial of " << n;
    // Calling a function
    cout << "Using Approch 1 : " << factorial(n) <<endl;
    cout << "Using Recursive Approch: " << factorial_appr2(n) << endl; 
}