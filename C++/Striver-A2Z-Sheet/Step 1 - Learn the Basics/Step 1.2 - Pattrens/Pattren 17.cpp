// Problem statement
// Sam is curious about Alpha-Hills, so he decided to create Alpha-Hills of different sizes.

// An Alpha-hill is represented by a triangle, where alphabets are filled in palindromic order.

// For every value of ‘N’, help sam to return the corresponding Alpha-Hill.

// Example:
// Input: ‘N’ = 3

// Output: 
//     A
//   A B A
// A B C B A

#include <iostream>
using namespace std;

void alphaHill(int n) {
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for (int j=1;j<=i;j++){
            cout<<char(64+j)<<" ";
        }
        for (int j=i-1; j>=1; j--){
            cout<<char(64+j)<<" ";
        }
        cout<<endl;  
    }
}

// Approach 2
// class Solution {
//    public:
//     void pattern17(int n) {
//         for (int cnt = 1; cnt <= n; cnt++) {
//             for (int i = n - cnt; i >= 1; i--) {
//                 cout << " ";
//             }
//             for (char j = 1; j <= (2 * cnt) - 1; j++) {
//                 if (j > cnt) {
//                     cout << char(64 + ((2 * cnt) - j));
//                 } else {
//                     cout << char(64 + j);
//                 }
//             }
//             cout << endl;
//         }
//     }
// };

// Apprach 3
// class Solution {
//    public:
//     void pattern17(int n) {
//         for (int cnt = 1; cnt <= n; cnt++) {
//             for (int i = n - cnt; i >= 1; i--) {
//                 cout << " ";
//             }
//             for (char j = 1; j <= (2 * cnt) - 1; j++) {
//                 if (j > cnt) {
//                     cout << char(64 + ((2 * cnt) - j));
//                 } else {
//                     cout << char(64 + j);
//                 }
//             }
//             cout << endl;
//         }
//     }
// };

int main() {
    int n;
    cin >> n;
    alphaHill(n);
    return 0;
}