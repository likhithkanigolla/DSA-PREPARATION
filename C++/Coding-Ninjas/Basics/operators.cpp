#include <iostream>
using namespace std;

int main(){

    /*Operators in C++
    Arthematic Operators (+ , - , * , /, %)
    Assignmnent Operators( += , -=, *=, /=, %=)
    Unary Operators ( -  ( For Value conversion from Pos to Neg, Neg to Pos)
                      !  ( Not Operator)
                      ++ ( Increment Operator) -- ( Decrement Operator)
                      ~  ( Bitwise Complement- One's Complement)
                    )
    Relatinoal Operators ( == , != , > , >= , < , <=)
    Logical Operators ( || , && , !)
    Bitwise Operators ( | , &, ~ (NOT OPERATOR), ^(XOR) , << ( Left Shift) , >> ( Right Shift) )
    // Left Shift Appends 0's to the Right. Left Shift of 2 of  00001 becomes 0000100
    // Right Shift Removes 0's from the righh 1000 becomes 10 

    Misc sizeof() operator, comma Operator, ? ( Conditionoal Eg b = ( a > 10) ?  2 : 5 , If condition true value will be 2 or it will be 5 )
    *b is a pointer operator and &b is the address operator  

    */

   int a , b;
   cout << " Enter the two Numbers: "; 
   cin >> a >> b ;
   cout << " Given Numbers are " << a << "," <<b ;

    //  Arthematic Operators 
   int addition = a+b;
   int subraction = a-b;
   int multipication = a*b;
   int division = a/b;
   int modulus = a%b;

   printf("Using Arthematic Operators \n Addition: %i \n Subraction: %i \n Multipication: %i \n Division: %i \n Modulus: %i \n\n", addition, subraction, multipication, division, modulus);



}