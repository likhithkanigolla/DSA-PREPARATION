// Problem statement
// Ninja has been given a task to print the required star pattern and he asked your help for the same.

// You must return an ‘N’*’N’ matrix corresponding to the given star pattern.

// Example:
// Input: ‘N’ = 4

// Output: 

// ****
// *  *
// *  *
// ****


#include <iostream>
using namespace std;

void getStarPattern(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        if(i==1||i==n){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int j=2;j<=n-1;j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
}


int main() {
    int n;
    cin >> n;
    getStarPattern(n);
    return 0;
}