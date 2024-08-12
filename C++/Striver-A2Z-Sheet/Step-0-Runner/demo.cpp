#include <iostream>
#include <unordered_set>
using namespace std;

void explainUnordedSet(){
    // Unordered Set is similar to set, but it does not store elements in any order
    // Unordered Set is implemented using Hash Table
    // Unordered Set is usually used to check whether an element is present in the set or not
    // Complexities
    // insert(): O(1)
    // find(): O(1)
    // erase(): O(1)
    // size(): O(1)
    // empty(): O(1)
    
    // Syntax
    // unordered_set<data_type> Unordered_set_name;
    // unordered_set<data_type, hash_function> Unordered_set_name;
    // unordered_set<data_type, hash_function, key_equal> Unordered_set_name;
    // unordered_set<data_type, hash_function, key_equal, allocator> Unordered_set_name;
    
    unordered_set<int> s;
    s.insert(1); // 1
    s.insert(3); // 1 3
    s.insert(2); 
    s.insert(5);
    s.insert(5); 
    s.insert(4); 
    
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
}

int main(){
    explainUnordedSet();
    return 0;
}