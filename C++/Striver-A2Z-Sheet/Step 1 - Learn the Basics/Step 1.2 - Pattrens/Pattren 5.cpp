
// Problem statement
// Sam is planting trees on the upper half region (separated by the left diagonal) of the square shared field.

// For every value of ‘N’, print the field if the trees are represented by ‘*’.

// Example:
// Input: ‘N’ = 3

// Output: 
// * * *
// * *
// *

#include <iostream>
using namespace std;

void seeding(int n) {
	// Write your code here.
	for(int i=n;i>=1;i--){
		for (int j=i;j>=1;j--){
			cout<<"* ";
		}
		cout<<endl;
	}
}

int main() {
    int n;
    cin >> n;
    seeding(n);
    return 0;
}