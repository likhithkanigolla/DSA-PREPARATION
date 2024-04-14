#include <iostream>
using namespace std;

// For Example: Suppose a=98 & b=56 a>b so put a = a-b and b remains same. So a = 98-56 = 42 & b = 56. Since b>a, we check if b%a==0. Since answer is no we proceed further. Now b>a so b=b-a and a remain same. So b = 56-42 = 14 & a = 42. Since a>b, we check if a%b==0. Now the answer is yes. So we print smaller among a and b as H.C.F. i.e. 42 is 3 times of 14. So HCF is 14. 

// Likewise when a = 36 & b = 60, here b>a so b = 24 & a= 36 but a%b!=0. Now a>b so a = 12 & b = 24 and b%a==0. smaller among a and b is 12 which becomes HCF of 36 and 60.   



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

int main(){
    int a,b;
    cout<<"Enter two number seperated by space: ";
    cin >> a >> b;
    cout<< gcd(a,b)<<endl;
    }
