#include <iostream>
using namespace std;

int countBits(int n) {
    int count = 0;
    while (n > 0) {
        count += n & 1;  // Check if the least significant bit is set
        n >>= 1;        // Right shift by 1 to process the next bit
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countBits(n);
    return 0;
}
