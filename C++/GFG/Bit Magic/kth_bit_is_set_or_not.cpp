#include <iostream>
using namespace std; 

// Explanation: 
// n = 4, k = 2 
// n = 4 => 100
// Right shift by K => 001
//                1 => 001
// There fore its true 
// if k=1 
// Right shift by K => 010
//                1 => 001
//  Therefore its false 

bool check_Kth_bit(int n, int k){
    if ( (n >> k) & 1){
        return true;
    }
    return false;
}


int main(){
    int n, k; 
    cout<<"Enter a Number: "; 
    cin>>n;
    cout<<"Enter the Index: ";
    cin>>k; 
    cout<<check_Kth_bit(n,k);
}