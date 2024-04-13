#include <iostream>
using namespace std;

float nth_gp_term(float first_term, float second_term, int n){
    float common_ratio = second_term/first_term;
    return first_term * pow(common_ratio, (n-1));
}


int main(){
    float first_term, second_term;
    int n; 
    cout<<"Enter First Term: "; 
    cin>>first_term;
    cout<<"Enter Second Term: "; 
    cin>>second_term;
    cout<<"Enter the number of which position you want gp: "; 
    cin>>n;
    cout<<"GP term of "<< n << "is "<<nth_gp_term(first_term,second_term,n)<<endl;
}