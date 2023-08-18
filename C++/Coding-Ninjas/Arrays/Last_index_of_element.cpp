#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int arrsize,i;
    cin>>arrsize;
    int arra[arrsize];
    for(int i=0;i<arrsize;i++){
        cin>>arra[i];
    }
    int searele,tempvar=0;
    cin>>searele;
    for(int i=arrsize;i>0;i--){
        if(arra[i]==searele){
            cout<<i;
            tempvar=1;
            break;
        }
    }
    if(tempvar==0){
        cout<<"-1";
    }

    return 0;
}