#include <iostream>
#include <string>
using namespace std; 


int reverse(int n){
    int reverse_number=0;
    while(n>0){
        int remainder  = n%10;
        reverse_number = reverse_number*10 + remainder; 
        n=n/10; 
    }
    return reverse_number;
    

}

int palindrome(int n){
    return reverse(n) == n;
}


int main(){
    int n ; 
    cout<< " Enter a Number : "; 
    cin >> n ; 
    cout<< "Is given number palindrome: "<<palindrome(n)<<endl;

}