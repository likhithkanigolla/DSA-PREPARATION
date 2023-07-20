#include <iostream>
using namespace std;

int main(){

    //declaring a 2d array directly 
    int array[3][2]={{2,5},{3,2},{5,8}};

    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<"arr["<<i<<"]["<<j<<"]"<<"is "<<array[i][j]<<endl;
        }
    }

    // Taking the array input
    cout<<"Enter the number of rows and coloums for a 2d array: "<<endl;
    int row,col;
    cin>>row>>col;
    int newarray[row][col];

    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<"Enter the Input Number for newarray["<<i<<"]["<<j<<"]: "<<endl;
            cin>>newarray[i][j];
        }
    }
    //Priniting the input array 

    for(int i=0;i<row;i++){
        for (int j=0;j<col;j++){
            cout<<"newarray["<<i<<"]["<<j<<"]"<<"is "<<newarray[i][j]<<endl;
        }
    }

}