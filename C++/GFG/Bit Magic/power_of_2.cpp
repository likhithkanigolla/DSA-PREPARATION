#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    // Check if 'n' is positive
    if (n <= 0)
        return false;
    // Check if 'n' is a power of 10
    // 
    double exponent = log2(n);
    return exponent == floor(exponent);
}

int main(){
    int n; 
    cout<<"Enter a Number: "; 
    cin>>n; 
    cout << isPowerOfTwo(n) << endl;
}