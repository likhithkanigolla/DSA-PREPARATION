#include <iostream>
using namespace std; 

// Formulas for modular addition 
// =>(a*b)modm=((amodm)*(bmodm))modm
// =>(a*b*c)modm=((amodm)*(bmodm)*(cmodm))modm

int modulo_multipication(int a , int b, int M){
    return ((a % M)*(b % M ))%M;
    }

int multipicative_inverse(int a, int m){
    int b;
    for(int i=1;i<=m;i++){
        if(modulo_multipication(a,i,m)==1){
            b=i;
            break;
        }
    }
    return b;
}

int main(){
    int a,m;
    cout<< "Enter a number: ";
    cin>>a; 
    cout<<"Enter a modular: ";
    cin>>m;
    cout<<multipicative_inverse(a,m)<<endl;
}