class Solution {
   public:
    int countOdd(int arr[], int n) {
        int sum_of_arr = 0;
        for (int i = 0; i < n; i++) {
            if(arr[i]%2!=0)
            sum_of_arr += 1;
        }
        return sum_of_arr;
    }
};
