// Problem statement
// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the N-Binary Number Triangle.

// You are required to print the pattern as shown in the examples below.

// Example:
// Input: ‘N’ = 3

// Output: 

// 1
// 0 1
// 1 0 1

// Sample Input 1:
// 3
// Sample Output 1:
// 1
// 0 1
// 1 0 1
// Sample Input 2 :
// 4
// Sample Output 2 :
// 1
// 0 1
// 1 0 1
// 0 1 0 1
// Sample Input 3 :
// 6
// Sample Output 3 :
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1 
// 0 1 0 1 0 1

#include <iostream>
using namespace std;

void nBinaryTriangle(int n) {
    bool a=true;
    // Write your code here.
    cout<<a<<endl;
    for (int i=2;i<=n;i++){
        if(i%2==0){
            a=false;
        }
        else{
            a=true;
        }
        for (int j=1;j<=i;j++){
            cout<<a<<" ";  
            a=!a;
        }
        cout<<endl;
    }
}