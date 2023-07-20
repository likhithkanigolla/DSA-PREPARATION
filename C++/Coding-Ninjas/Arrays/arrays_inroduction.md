Array Declaration 

```cpp
// Declare an array of user specified size 
int n; 
cin >> n; 
int arr[n];
 // Taking input in the array 
 for (int i = 0 ; i < n ; i++) 
 { cin >> arr[i] }
```


Note:To delete a dynamicarray from the computer memory,you should use delete[] instead of delete.The[]instructs the CPU to delete multiple variables rather than one variable.The use of delete instead of delete[] when dealing with a dynamic array may result in problems, such as memory leaks, data corruption, crashes, etc. 

Syntax: 
```cpp

delete [] arr;

```

