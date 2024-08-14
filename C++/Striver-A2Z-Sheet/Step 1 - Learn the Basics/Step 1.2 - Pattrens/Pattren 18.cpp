// Sam is researching on Alpha-Triangles. So, he needs to create them for different integers ‘N’.

// An Alpha-Triangle is represented by the triangular pattern of alphabets in reverse order.

// For every value of ‘N’, help sam to print the corresponding Alpha-Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 
// C
// C B 
// C B A


#include <iostream>
using namespace std;

void alphaTriangle(int n) {
    // Write your code here.
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+(n-j+1))<<" ";
        }
        cout<<endl;
    }
}

int main() {
    int n;
    cin >> n;
    alphaTriangle(n);
    return 0;
}