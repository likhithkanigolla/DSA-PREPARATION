#include <iostream>
using namespace std;

void printTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void printTableReverse(int n){
    for (int i = 10; i >= 1; i--) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

void printTableWhileLoop(int n) {
    int i = 1;
    while (i <= 10) {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    cout << "Table of " << n << " is:" << endl;
    printTable(n);
    cout << "Reverse Table of " << n << " is:" << endl;
    printTableReverse(n);
    return 0;
}