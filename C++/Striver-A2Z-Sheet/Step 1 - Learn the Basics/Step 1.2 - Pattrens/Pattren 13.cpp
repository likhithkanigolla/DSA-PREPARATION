// Problem statement
// Aryan and his friends are very fond of patterns. For a given integer ‘N’, they want to make the Increasing Number Triangle.

// Example:
// Input: ‘N’ = 3

// Output: 

// 1
// 2 3
// 4 5 6

#include <iostream>
using namespace std;

void nNumberTriangle(int n) {
    // Write your code here.
    int number=1;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=i;j++){
            cout<<number<<" ";
            number+=1;
        }
        cout<<endl;
    }
}

// Approach 2
// class Solution {
//    public:
//     void pattern13(int n) {
//         int number = 1;
//         for (int i = 1; i <= n; i++) {
//             for (int j = 1; j <= i; j++) {
//                 cout << number<<" ";
//                 number++;
//             }
//             cout << endl;
//         }
//     }
// };

int main() {
    int n;
    cin >> n;
    nNumberTriangle(n);
    return 0;
}

