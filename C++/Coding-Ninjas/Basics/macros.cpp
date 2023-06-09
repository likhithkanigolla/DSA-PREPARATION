#include <iostream>
using namespace std;

//this is a comment
/*This is a Multiline Comment*/
//Now Defining a Macro

#define Number 5
// The above line is a macro 

//macros with a parameter 
#define AreaOfRectangle(l,b)(l*b)

int main()
{
    /* code */
    for (int i = 0; i < Number; i++)
    {
        /* code inside the loop*/
        cout<<i<<" ";
    }
    cout << "\n";

    int l=10,b=5,a;
    a= AreaOfRectangle(l,b);

    cout<< "Area of the rectangle from a macro parameter is: "<< a << "\n";
    
    return 0;
}

