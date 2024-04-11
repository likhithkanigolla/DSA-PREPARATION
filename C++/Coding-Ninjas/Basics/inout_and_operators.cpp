#include <iostream>
using namespace std;

int main()
{
    /* code */

    // Inputs can be taken through the cin and outputs can be done therough cout 
    //  Heello

    int var1, var2;
    string str1;

    cout << " Enter Some string :" ;
    cin >> str1; // Taking the String Input  
    cout << " Enter Two Numbers with a space: " ;
    cin >> var1 >> var2; // Taking Mutiple imputs in a single line cin >> " Enter Two Numbers:"  is a syntax error 
    cout << "Hello All,";
    cout << "Entered String is: "<< str1 << endl;
    cout << " How about adding the two number given by you:" << var1+var2 << endl;
    cin.ignore();

    // Another way to take the input a string is using the string header and the getline function 
    // Taking the lineinput 
    // First Defining a macro to define the length 
    #define MAX_LEN 50

    char line[MAX_LEN] ;
    cout << "Write a Single line: ";
    // The Usge of the getline is, in string if you write Hello World it will take only Hello because of the space, In getline you can take the input in a line
    cin.getline (line,MAX_LEN);
    cout << line << endl;

    // So we got the line, Now I want to write a poem but how's that possible? getline takes one line 
    // Here comes deliminator. In the below example i am using '!!!' as deliminator

    cout<< " Write a Poem: "<<endl;
    char poem[MAX_LEN];
    cin.getline(poem,MAX_LEN,'!!!');

    //printf is the another approch to print the lines 
    printf("Here is your poem: %s ",poem);


    // In the Output Deliminator gets eliminated. We are saying the terminal that its a end of the lines

    return 0;
}

