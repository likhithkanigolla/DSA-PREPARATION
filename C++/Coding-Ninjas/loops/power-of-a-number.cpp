#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
     int base, exponent;
    int result = 1;

    std::cin >> base;

    std::cin >> exponent;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    std::cout <<result << std::endl;

    return 0;
}