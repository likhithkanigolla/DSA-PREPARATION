### Why to use pointers and how can be they are efficient?

Let's consider a real-time example to illustrate the efficiency of using pointers for array access.

Example: Calculating the Sum of Array Elements

Suppose we have a large array of integers with millions of elements, and we need to calculate the sum of all the elements. We'll compare two approaches: one using array indexing and the other using pointers.

Approach 1: Array Indexing

```cpp
int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}
```

Approach 2: Pointers

```cpp
int sumArray(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);
    }
    return sum;
}
```

Now, let's consider the efficiency of both approaches using some hypothetical numbers:

- Array size: 10,000,000 (10 million) elements
- Size of `int`: 4 bytes

Approach 1: Array Indexing
- Memory accesses: 10,000,000 (10 million) (arr[i])
- Memory accesses for each element: 1 (direct access)
- Total memory accesses: 10,000,000 * 1 = 10,000,000

Approach 2: Pointers
- Memory accesses: 10,000,000 (10 million) (*(arr + i))
- Memory accesses for each element: 1 (direct access)
- Total memory accesses: 10,000,000 * 1 = 10,000,000

Both approaches have the same number of memory accesses, so it may seem like there's no difference in efficiency. However, pointer arithmetic offers a potential advantage when accessing arrays with larger data types.

For example, consider an array of structures where each element has a size of 100 bytes. In this case, using pointers with pointer arithmetic becomes more efficient. Let's modify the example:

- Array size: 10,000,000 (10 million) elements
- Size of structure: 100 bytes

Approach 1: Array Indexing
- Memory accesses: 10,000,000 (10 million) (arr[i])
- Memory accesses for each element: 100 (100-byte structure)
- Total memory accesses: 10,000,000 * 100 = 1,000,000,000 (1 billion)

Approach 2: Pointers
- Memory accesses: 10,000,000 (10 million) (*(arr + i))
- Memory accesses for each element: 1 (direct access)
- Total memory accesses: 10,000,000 * 1 = 10,000,000

Also about the storage about the variables. If there is a array of elements and you want to store 100 elements in the array without the pointers the for loop is to be run to store the 100 elelments in the array, Which creates the 100 temporary variables in the meory which leads to the unnesseary memory allocation . instead you can create a pointer and then store the address of the array and pass them to store the values which will create only 2 variable instead of x elements+2 (100+2)

