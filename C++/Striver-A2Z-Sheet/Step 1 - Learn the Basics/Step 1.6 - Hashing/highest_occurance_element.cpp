#include <iostream>
using namespace std;

class Solution {
public:
    int mostFrequentElement(vector<int>& given_input) {
        // will take a map(dict) with the size(we dont have to define)
        // lets say we have n elements, ultimately numbers so, 0->inf and map size 0->inf, therefore i will store the number as key and the repetation as value
        // [2,2,5,6,2,6,1,5,7,2,5,6] -> <1,1> <2,4> <5,3> <6,3> i want this compute, but to do this compute i need to iterate once -> O(N) for N i need size, since not given we will calculate 
        int size_of_given_array = given_input.size() ;
        unordered_map<int, int> element_frequency; 

        for( int i = 0; i<size_of_given_array; i++){
            // i=0  => given_input[0]=2   -> element_frequency<2,1>
            // i=1  => given_input[1]=2   -> element_frequency<2,2>
            // i=2  => given_input[2]=5   -> element_frequency<5,1>
            // i=3  => given_input[3]=6   -> element_frequency<6,1>
            // i=4  => given_input[4]=2   -> element_frequency<2,3>
            // i=5  => given_input[5]=6   -> element_frequency<6,2>
            // i=6  => given_input[6]=1   -> element_frequency<1,1>
            // i=7  => given_input[7]=5   -> element_frequency<5,2>
            // i=8  => given_input[8]=7   -> element_frequency<7,1>
            // i=9  => given_input[9]=2   -> element_frequency<2,4>
            // i=10 => given_input[10]=5  -> element_frequency<5,3>
            // i=11 => given_input[11]=6  -> element_frequency<6,3>
            // element_frequency= {2:4,5:3,6:3,1:1}
            // while the order {2:4, 5:3, 6:3, 1:1} is just one of many possible arbitrary orders for unordered_map
            element_frequency[given_input[i]]++ ;
        }

        int highest_occuring_element=0;
        int highest_frequency_count=0;

        // auto will iterate the elements in the map
        for(auto it:element_frequency){
            int current_element= it.first;
            int current_element_frequency = it.second;

            if(current_element_frequency>highest_frequency_count){
                highest_frequency_count=current_element_frequency;
                highest_occuring_element=current_element;
            }
            else if(current_element_frequency==highest_frequency_count){
                // If there are multiple elements that appear a maximum number of times, find the smallest of them.
                highest_occuring_element=min(highest_occuring_element, current_element);
            }

        }

        return highest_occuring_element;
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    int result = sol.mostFrequentElement(nums);
    cout << "The most frequent element is: " << result << endl;
    return 0;
}