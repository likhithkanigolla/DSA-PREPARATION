#include <iostream>
using namespace std;
class Solution{
public:
	int sum(int arr[], int n) {
        int sum_of_arr=0;
	  for(int i=0;i<n;i++){
        sum_of_arr+=arr[i];
      }
    return sum_of_arr;
	}
};

int main() {
    Solution sol;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = sol.sum(arr, n);
    cout << "The sum of the array elements is: " << result << endl;
    return 0;
}