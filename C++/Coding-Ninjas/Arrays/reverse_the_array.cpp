#include <iostream>
using namespace std;

int main() {
    //Write your code here
    int arrsize;
    cin>>arrsize;
    int arra[arrsize];
    for(int i=0;i<arrsize;i++){
        cin>>arra[i];
    }
    for(int i=arrsize-1;i>=0;i--){
        cout<<arra[i]<<" ";
    }

    return 0;
}