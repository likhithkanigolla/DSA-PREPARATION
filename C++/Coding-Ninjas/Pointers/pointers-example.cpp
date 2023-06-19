#include <iostream> 
using namespace std;

int main() 
{ 
    int i = 10;
    int* p;
    p = &i;
    
    std::cout << "Hello world!";
    std::cout << "Address of i: " << (&i) << std::endl;
    std::cout << "Address stored in p: " << p << std::endl;
    std::cout << "Address of p: " << (&p) << std::endl;


    int firstvalue = 5, 
    secondvalue = 15; 
    char thirdvalue = 'a'; 
    
    int * p1, * p2; char * p3;

    p1 = & firstvalue; // p1 = address of firstvalue
    p2 = & secondvalue; // p2 = address of secondvalue 
    p3 = & thirdvalue; // p3 = address of thirdvalue
    * p1 = 10; // value pointed to by p1 = 10 
    * p2 = * p1; // value pointed to by p2 = value pointed to by p1 p1 = p2; // p1 = p2 (value of pointer is copied) 
    * p1 = 20; // value pointed to by p1 = 20 
    * p3 = 'b'; // value pointed to by p3 = ‘b ’ 
    cout << "firstvalue is " << firstvalue << endl; 
    cout << "secondvalue is " << secondvalue << endl; 
    cout << "thirdvalue is " << thirdvalue << endl; 
    
    return 0; 
    
}

    /*Output: 
    Hello world!Address of i: 0x7fffb737374c
    Address stored in p: 0x7fffb737374c
    Address of p: 0x7fffb7373740

    firstvalue is 10 
    secondvalue is 20 
    thirdvalue is b*/