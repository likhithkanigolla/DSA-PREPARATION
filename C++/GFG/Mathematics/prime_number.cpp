#include <iostream>
using namespace std; 

// For prime numbers, checking divisibility up to n/2 is sufficient because no integer greater than n/2 can evenly divide n without exceeding n.


bool prime(int n){
    // Check divisibility of 'n' by numbers up to half of 'n'
    // If 'n' is divisible by any number between 2 and n/2, it's not a prime
    for (int i = 2; i <= n / 2; i++) {
        // Check if 'n' is divisible by 'i' without any remainder
        if (n % i == 0) {
            // If 'n' is divisible by 'i', it's not a prime number
            return false;
        }
    }
    // If 'n' is not divisible by any number between 2 and n/2,
    // it doesn't have any factors other than 1 and itself, so it's prime
    return true;
}


int main(){
    int n; 
    cout<< " Enter a number: ";
    cin>> n;
    cout<<prime(n);
}