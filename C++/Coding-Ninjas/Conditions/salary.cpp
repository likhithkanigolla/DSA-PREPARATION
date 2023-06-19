#include <bits/stdc++.h> 
#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int bsal;
    cin>>bsal;


    char stype;
    cin>>stype;


    float hra = 0.2*bsal;
    float da  = 0.5*bsal;
    float bonus;

    if (stype == 'A'){
        bonus=1700;
    }
    else if ( stype == 'B'){
        bonus=1500;
    }
    else{
        bonus=1300;
    }

    float pf=0.11*bsal;

    int tsal=round(bsal+hra+da+bonus-pf);
    cout<<tsal;

    return 0;
}