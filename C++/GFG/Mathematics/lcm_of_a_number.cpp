#include <iostream>
using namespace std; 

int gcd(int a , int b){
    if (max(a,b)% min(a,b)==0){
        return min(a,b);
    }
    else if ( a == b ){
        return a;
    }
    else if ( a > b){
        return gcd(a-b, b);
    }
    else{
        return gcd(a, b-a);
    }
}

int lcm (int a, int b){
    return (a*b)/gcd(a,b);
}

int main(){
    int a,b;
    cout<<"Enter two number seperated by space: ";
    cin >> a >> b;
    cout<< lcm(a,b)<<endl;
    }
