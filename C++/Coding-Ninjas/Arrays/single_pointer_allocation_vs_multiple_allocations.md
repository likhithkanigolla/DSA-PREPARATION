### Single Pointer Allocation in a 2D Array 
The concept is to allocating the single pointer to the 2D array. So you are creating only one variable (pointer) in the stack memory. 
Here is the piece of code for the same. Assuming the array is defined as Arr[row][col] 

```cpp
  int *Arr= new int [row*col];

  // To Assign a Value
   *(Arr+i*col+j)=rand()%100;
```
### Dynamically allocate the size of the pointers with resp to coloumn
Similarly multiple pointers can be created for the same,
The code snippet creates an array of pointers Arr with row elements: int **Arr = new int *[row];.
Each element in Arr is then assigned a dynamically allocated integer array of size col using a loop: Arr[i] = new int[col];.

So if the rows are 100 then 100 pointers are created no matter the number of coloumns are.
```cpp
    //Dynamically create the array of pointers of size row 
    int **Arr= new int *[row];
    //Dynamically allocate memory of c0lumn for each row from 0 to row -1 
    for (int i = 0; i<row ; i++)
        Arr[i]=new int[col];

    //to Assign a value
    Arr[i][j]=rand()%100;
```
Lets Take a example, Considering a array of Arr[100][2] So there are 100 rows and 2 coloumns 

In the **Case 1** Single pointer is created of the size **rows*coloumns** which is 100(rows)*2(coloumns)=200 memory block wil be created. There fore 1(pointer)*200(block size)= 200 Memory Block will be created 
But in the **Case 2** First a Pointer of Pointer of rows are created and then each pointer block is assigned with the memory of coloumn size. Which means 100 pointers of memory 2 each. which is equals to 100(pointers)*2(Each Memory Block Size)=200 Block of memory 

The Advantage in the **Case 2** is Each rows has a seperate pointer which more convient to use, You use **case 1 or 2 depends upon your use case**. But in the **Case 2** it more easy to access the elements as compared to 1 and convient to write the code as per my understanding but it varies to every individual. 
