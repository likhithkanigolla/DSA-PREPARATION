#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int number;
    int factorial = 1;

   
    std::cin >> number;

    if (number < 0) {
        std::cout << "Error" << std::endl;
    }
    else if(number ==0){
         std::cout << "1" << std::endl;
    } 
    else {
        for (int i = 1; i <= number; i++) {
            factorial *= i;
        }

        std::cout << factorial << std::endl;
    }

    return 0;
}