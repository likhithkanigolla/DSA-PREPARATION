#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    double principal, rate, time;
    cin >> principal;
    cin >> rate;
    cin >> time;

    int interest = (principal * rate * time) / 100;

    cout<< "Intrest is : " << interest <<endl;

    return 0;
}
