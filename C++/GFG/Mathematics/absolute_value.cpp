#include <iostream>
using namespace std; 

int absolute_value(int n){
    return abs(n);
}

int absolute(int n){
    // Arthematic operators can be used directly in the return function using round brackets
    return -(n);
}

int main(){
    int n ; 
    cout<< " Enter a Number : "; 
    cin >> n ; 
    cout<< " Positive Value for given number is: "<< absolute_value(n)<< endl;
    cout<< " Converted to positive without abs: " << absolute(n)<<endl;

}