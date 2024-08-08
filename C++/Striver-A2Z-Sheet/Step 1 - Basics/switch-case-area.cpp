#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        
        switch(choice){
            case 1:
                return M_PI*arr[0]*arr[0];
            case 2:
                return arr[0]*arr[1];
            default:
                return -1;
        }
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int choice;
        cin >> choice;
        vector<double> arr = {0.0, 0.0}; // Initialize arr with default values
        for (int i = 0; i < 2; i++) cin >> arr[i];
        Solution obj;
        cout << obj.switchCase(choice, arr) << endl;
    }
    return 0;
}