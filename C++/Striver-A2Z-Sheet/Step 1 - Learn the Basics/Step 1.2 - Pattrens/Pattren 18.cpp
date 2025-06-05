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

// Approach 2
// class Solution {
// public:
//     //Function to print pattern18
//     void pattern18(int n) {
//         // Outer loop for the number of rows.
//         for(int i = 0; i < n; i++) {
            
//             /* Inner loop for printing alphabets
//             from A + n -1 -i (i is row no.) to
//             A + n -1 ( E in this case).*/
//             for(char ch = ('A'+ n-1)-i; ch <= ('A'+ n-1); ch++){
//                 cout<<ch<<" ";
//             }
            
//             // Move to the next line for the next row.
//             cout << endl;
//         }
//     }
// };

int main() {
    int n;
    cin >> n;
    alphaTriangle(n);
    return 0;
}