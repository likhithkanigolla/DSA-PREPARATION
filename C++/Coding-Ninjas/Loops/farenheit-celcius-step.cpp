/*Sample Input 2:
20
119
13
Sample Output 2:
20  -6
33  0 
46  7
59  15
72  22
85  29
98  36
111 43

Explanation For Sample Input 2:
We need need to start calculating the Celsius values for each of the Fahrenheit Value which starts from 20. 
So starting from 20 which is the given Fahrenheit start value, we need to compute its corresponding Celsius value which computes to -6. 
We print this information as <Fahrenheit Value> a tab space"\t" <Celsius Value> on each line for each step of 13 we take to get the next 
value of Fahrenheit and extend this idea till we reach the end that is till 119 in this case. You may or may not exactly land on the end 
value depending on the steps you are taking.*/

#include <iostream>
using namespace std;

int main() {
    int fahrenheit_start, fahrenheit_end, step;
    cin >> fahrenheit_start >> fahrenheit_end >> step;

    int fahrenheit = fahrenheit_start;
    while (fahrenheit <= fahrenheit_end) {
        int celsius = (fahrenheit - 32) * 5 / 9;
        cout << fahrenheit << " " << celsius << endl;
        fahrenheit += step;
    }

    return 0;
}
