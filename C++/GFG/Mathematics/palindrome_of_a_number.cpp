#include <iostream>
#include <string>
using namespace std; 


// Example n = 2002
// itration 1 -> remainder(2002%10)  = 2 -> reverse = 0*10 + 2 = 2, n = 2002/10 = 200
// itration 2 -> remainder(200%10)  = 0 -> reverse = 2*10 + 0 = 20, n = 200/10 = 20
// itration 3 -> remainder(20%10)  = 0 -> reverse = 20*10 + 0 = 200, n = 20/10 = 2
// itration 4 -> remainder(2%10)  = 2 -> reverse = 200*10 + 2 = 2002, n = 2/10 = 0


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