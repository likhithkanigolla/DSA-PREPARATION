#include <iostream>
using namespace std; 

// Formulas for modular addition 
// =>(a+b)modm=((amodm)+(bmodm))modm
// =>(a+b+c)modm=((amodm)+(bmodm)+(cmodm))modm

long long int modulo_addition(long long int a , long long int b){
    long long int M = pow(10,9)+7;
    long long int c = a % M;
    long long int d = b % M ;
    return (c+d)%M;
    }

int main(){
    long long int a,b;
    cout<< "Enter two numbers seperated by a space: ";
    cin>>a>>b; 
    cout<<modulo_addition(a,b)<<endl;
}