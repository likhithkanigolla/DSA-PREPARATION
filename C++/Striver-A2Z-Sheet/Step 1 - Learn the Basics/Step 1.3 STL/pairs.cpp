#include <iostream>
#include <utility>
using namespace std;


void explainPais(){
    // Pair is a simple container defined in utility header file
    // Pair is used to combine two values together
    // Pair can store two values of different data types
    // Pair provides a way to store two heterogeneous objects as a single unit
    // Pair can be assigned, copied and compared
    // We can access the first and second element of pair using dot operator
    // Pair is used in STL, to return two values from a function
    // Pair is used in map and multimap to return two values
    // Pair is used in unordered_map and unordered_multimap to return two values
    // Pair is used in set and multiset to return two values
    // Pair is used in unordered_set and unordered_multiset to return two values

    // Syntax
    // pair<data_type1, data_type2> Pair_name;
    // pair<data_type1, data_type2> Pair_name(value1, value2);
    // make_pair(value1, value2);
    // Pair_name.first
    // Pair_name.second

    pair<int, int> p= {1, 3};
    cout<<p.first<<" "<<p.second<<endl;

    pair<int, string> p1= {1, "abc"};
    cout<<p1.first<<" "<<p1.second<<endl;

    pair<int, int> arr[]= {{1, 2}, {2, 3}, {3, 4}};
    cout<<arr[0].first<<" "<<arr[0].second<<endl;

    pair<int, int> p2= make_pair(1, 3);
    cout<<p2.first<<" "<<p2.second<<endl;

    pair<int, pair<int, int>> p3= {1, {2, 3}};
    cout<<p3.first<<" "<<p3.second.first<<" "<<p3.second.second<<endl;
}


int main(){
    explainPais();
    return 0;
}


// Output 
// 1 3
// 1 abc
// 1 2
// 1 3
// 1 2 3
