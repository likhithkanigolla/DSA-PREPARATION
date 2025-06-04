// Problem statement
// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Letter Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// A
// A B
// A B C


#include <iostream>
using namespace std;


// Approach 1
// void nLetterTriangle(int n) {
//     // Write your code here.
//     char letter='A';
//     for(int i=1;i<=n;i++){
//         for (int j=1;j<=i;j++){
//             cout<<letter<<" ";
//             letter+=1;
//         }
//         cout<<endl;
//         letter='A';
//     }
// }

void nLetterTriangle(int n) {
    // Write your code here.
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;
    }
}

// Approach 2
// class Solution {
//    public:
//     void pattern14(int n) {
//         for (int i = 0; i < n; ++i) {
//             for (char j = 'A'; j <= 'A'+i; j++) {
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

