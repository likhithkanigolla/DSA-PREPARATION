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