#include <iostream>
#include <vector>
#include <algorithm>
// Add any other specific header files you need
using namespace std;

// 

int main() {
    // Write your code here
    int day;
    cin >> day;
    switch (day)
    {
    case 1:
        cout << "Monday";
        break;
    case 2:
        cout << "Tuesday";
        break;
        
    case 3:
        cout << "Wednesday";
        break;
    case 4:
        cout << "Thursday";
        break; 
    case 5: 
        cout << "Friday";
        break;
    case 6:
        cout << "Saturday";
        break;
    case 7:
        cout << "Sunday";
        break;
    default:
        cout << "Invalid Input";
        break;
    }
    return 0;
}