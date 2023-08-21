#include <bits/stdc++.h> 
#include <iostream>
#include<algorithm>

using namespace std;

void kthSmallestLargest(int arr[], int n, int k) {
    //Write your code here
    sort(arr, arr + n); // Sorting the array
    
    int arrnew[n]; // Array to store unique elements
    int newSize = 0; // Variable to keep track of the new array size
    
    // Removing duplicates and creating a new array with unique elements
    for (int i = 0; i < n; i++) {
        if (i == 0 || arr[i] != arr[i - 1]) {
            arrnew[newSize++] = arr[i];
        }
    }

    if (k <= newSize) {
       
         cout << arrnew[newSize - k] << " " << arrnew[k - 1]<<endl;
    } 
    
    else {
        cout << "-1 -1";
    }

}

int main() {
    int t;
    cin >> t;

    while (t > 0) {
        int n, k;
        cin >> n >> k;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        kthSmallestLargest(arr, n, k);
        t--;
    }
    return 0;
}