// Problem statement
// Aryan and his friends are very fond of the pattern. For a given integer ‘N’, they want to make the Reverse N-Number Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// 1 2 3
// 1 2
// 1

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    	for(int i=n;i>=1;i--){
		for (int j=1;j<=i;j++){
			cout<<j<<" ";
		}
		cout<<endl;
	}
}

int main() {
    int n;
    cin >> n;
    nNumberTriangle(n);
    return 0;
}
