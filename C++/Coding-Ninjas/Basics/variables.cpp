#include <iostream>
using namespace std;
 // This covers the various datatypes in the C++ and its usage 
/* Rules for defining a variable
1. Variable can't be started with a number example 9a, 656member etc 
2. Should not be the keywords in the C++ 
3. Only " _ " ( underscore ) is allowed in the variables 
4. Variables are case sensitive a and A are not same 

Variable Types :
int, long, short - integer, unsigned int, unsigned long - positve integer , 
float, double - decimal numbers 
char - characters including special characters , unsigned char - Character Values
bool - boolean values 
auto - takes the type automatically 
*/

int i, global_it_is;
// i,global_it_is is a global variable here


// Functions should be defined before hand or before they are called. and class definaions should be defined before the main function
// Instace variables are declared  inside the clasess, and by default it is private can be made public by Public a
// Class Defination with instacne, static , public variable 
class DemoClass {
    static int dd; // static variable number one 
    static int cc; // static variable number two 
    int aa ; // default private instance variable 
    int bb; // default private instance variable 
    
public:
    static int publicCc ; // public static variable
      
    void demofun(int cc){
        aa = 10;
        publicCc = cc; // Assign the value to publicCc instead of cc to define inside a function 
        cout << endl;
        cout << "Instace variable aa: "<<++aa << endl ; // prints 11 which is 10+1 =11 everytime no matter how many time function is called 
        cout <<"Static Variable but Defined in Function: "<< ++publicCc << endl ; // Use publicCc instead of cc, This changes according to the input parameter passed even tho it is static it is defined inside the function
        cout << "Function Called: " << ++dd << " times"<< endl<<endl; // It keeps track of how many times it is called and increments the number since it is a static variable 
    }
};

int DemoClass::dd = 0;
int DemoClass::cc = 0; // Define and initialize static variable cc
int DemoClass::publicCc = 0;

//void demofun(15); // We are saying to the compiler than demofun exists and called later or deined lateer 

int main() {
    int a = -5, b = 10;
    long c = 586599852632;
    unsigned int d = 15;
    float e = 5.5;
    char f = 'b';
    bool g = true;
    auto h = 59862.562;
    int maxofint= INT64_MAX; // Adding 1 to this value is overflow 
    int minofint= INT16_MIN; // Subracting 1 to this value is underflow 

    // a,b,c,d,e,f,g,h are local variables since it is inside the main fucntion 
    cout<< maxofint<<" "<<minofint<<endl;
    cout << "Printing All the Values: ";
    cout << a << " " << b << " " << c << " " << d << " " << e << " " << f << " " << g << " " << h << endl;
    cout <<"Sum of a and b is " << a+b << endl << endl;
    
    // Implicit are the convertions which compiler auto does to get the value 
    int number = 200;
    char letter ='c';
    float dec=0.5;
    int res1= number + letter; // automatically converts letter to integer and perfoms addition ascii of c is 99 so answer is 299
    // Value will be converted according to the type of the variable int or var or float etc 

    cout<<"Usage of the Implicit: "<<res1<<endl;
    // Explicit are the conversions which we have to make the converstions 

    double dbl = 5.6;
    int res = (int)dbl+10 ; // Manually Converting the double value to int which becomes 5.6 as 5 and adding 10 so becomes 15

    cout<< "Usage of the Explicit: "<<res<<endl;

    DemoClass obj; // Calling the Demo Class First with the name obj and calling the Function 
    obj.demofun(15);
    obj.demofun(20);

    return 0;
}



void demofun() {
    cout << "demofun() called" << endl;
}
