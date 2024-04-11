#include <iostream>
using namespace std; 

float convert_to_fahrenheit(float n){
    return ((n * 9)/5)+32;
}

float convert_to_celcius(float n){
    return ((n - 32)*5)/9;
}
int main(){
    int option;
    float temparature;
    cout << " Select option of input 1 or 2 : "<<endl << " 1. Celsius" << endl << " 2. Fahrenheit" << endl ; 
    cin >> option;
    if (option!= 1 && option != 2){
        cout << option;
        cout<< " Enter a valid Option 1 or 2: ";
        return 0;
    }
    cout << " Enter the temparature: ";
    cin >> temparature; 
    if(option == 1)
    cout <<  " Converted temparature to fahrenheit: " << convert_to_fahrenheit(temparature); 
    if(option == 2)
    cout <<  " Converted temparature to celsius: " << convert_to_celcius(temparature); 
}