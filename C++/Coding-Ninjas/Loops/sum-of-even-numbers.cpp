#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int n;
    std::cin >> n;

    int sum = 0;
    for (int i = 2; i <= n; i += 2) {
        sum += i;
    }

    std::cout <<sum << std::endl;


    return 0;
}