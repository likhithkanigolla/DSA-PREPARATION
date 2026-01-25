#include <iostream>
using namespace std;

class Solution {
public:
    int secondMostFrequentElement(vector<int>& nums) {
        // At first i need to count all the occurances 
        unordered_map<int,int> frequency_counter; 
        int size_of_the_given_array=nums.size();
        if (size_of_the_given_array<=1){
            return -1;
        }
        for(int i=0; i<size_of_the_given_array;i++){
            frequency_counter[nums[i]]++;
        }

        int first_highest_frequency_count = 0;
        int second_highest_frequency_count = 0;
        int first_highest_frequency_element = -1;
        int second_highest_frequency_element = -1; 

        for(auto itr:frequency_counter){
            int itr_element = itr.first;
            int itr_count = itr.second; 
            if (itr_count>first_highest_frequency_count){
                second_highest_frequency_element=first_highest_frequency_element;
                second_highest_frequency_count=first_highest_frequency_count;
                first_highest_frequency_count=itr_count;
                first_highest_frequency_element=itr_element;
            }
            else if(itr_count==first_highest_frequency_count){
                first_highest_frequency_element = min(itr_element,first_highest_frequency_element);
            }
            // else if(itr_count==second_highest_frequency_count){
            //     second_highest_frequency_element = min(itr_element,second_highest_frequency_element);
            // }
            // else if (itr_count<first_highest_frequency_count){
            //     if(itr_count==second_highest_frequency_count){
            //         second_highest_frequency_element=min(itr_element,second_highest_frequency_element);
            //     }
            //     if(itr_count>second_highest_frequency_count){
            //         second_highest_frequency_count=itr_count;
            //         second_highest_frequency_element=itr_element;
            //     }
         
            // }
            else if (itr_count>second_highest_frequency_count){
                second_highest_frequency_count=itr_count;
                second_highest_frequency_element=itr_element; 
            }
            else if(itr_count==second_highest_frequency_count){
                second_highest_frequency_element=min(itr_element,second_highest_frequency_element);
            }
        }
        return second_highest_frequency_element;

    
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    int result = sol.secondMostFrequentElement(nums);
    cout << "The second most frequent element is: " << result << endl;
    return 0;
}
