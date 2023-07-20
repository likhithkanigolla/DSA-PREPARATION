#include <iostream>
using namespace std;
int main()
{
    /* code */
    int row,col;

    cout<<"Enter Number of Rows: "<< endl;
    cin>> row; 
    cout<<"Enter Number of Coloums: "<< endl;
    cin >> col;

    //Dynamically create the array of pointers of size row 

    int **Arr= new int *[row];

    //Dynamically allocate memory of c0lumn for each row from 0 to row -1 

    for (int i = 0; i<row ; i++)
        Arr[i]=new int[col];

//Now the pointers are create for all the elements in the array
//Its time to add the elements/values to it. 

    for(int i=0;i<row;i++){
        for ( int j = 0 ; j<col;j++){
            //Assing the value as some random value
            Arr[i][j]=rand()%100;
        }
    }

    //Printing the 2d Array 

    for (int i = 0 ;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<Arr[i][j]<<"";
        }
        cout<<endl;
    }

    //Since we allocated some memory to the pointers and we need to deallocate the memory for the same

    for (int i = 0; i<row;i++){
        delete[] Arr[i];
    }
    delete[] Arr;
    return 0;
}
