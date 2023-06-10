#include <iostream>
using namespace std;


int main(){
    cout << "Enter Two Numbers: ";
    int num1,num2,temp;
    cin >> num1 >> num2;
    cout << " Number 1 is: " << num1 << ", Number 2 is : " << num2<<endl<<endl; 

    cout<< " Swapping the Numbers......" << endl;

    temp=num1;
    num1=num2;
    num2=temp;
    cout << " Now Number 1 is: " << num1 << ", Number 2 is : " << num2<<endl;

}

/*  Second Approch
pair<int,int> swaptwonum(pair<int, int> SwapNum){
    swap(SwapNum.first,SwapNum.second);
    return SwapNum;
}
*/

