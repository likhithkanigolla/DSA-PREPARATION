// Problem statement
// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Reverse Letter Triangle.

// You must print a matrix corresponding to the given Reverse Letter Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// A B C
// A B
// A

#include <iostream>
using namespace std;

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=n;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}

// Approach 2
// class Solution {
//    public:
//     void pattern15(int n) {
//         for (int i = 0; i < n; ++i) {
//             for (char j = 'A'; j < 'A' + n - i; j++) {
//                 cout << j;
//             }
//             cout << endl;
//         }
//     }
// };

int main() {
    int n;
    cin >> n;
    nLetterTriangle(n);
    return 0;
}