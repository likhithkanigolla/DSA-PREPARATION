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
    s.insert(5); // 1 2 3 5
    s.insert(5); // 1 2 3 5
    s.insert(4); // 4 5 2 3 1 
    
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
    
    auto it = s.find(3); //finds the element equal to 3 not the index
    if(it == s.end()){
        cout << "Not Found\n";
    }else{
        cout << "Found\n";
        cout << *it << endl;
    }
    
    s.erase(3); // It will erase all 3's 
    s.erase(s.find(5)); // It will erase only one 5 which is the first one
    for(auto i: s){
        cout << i << " ";
    }
    cout << endl;
    
    s.clear();
    cout << s.size() << endl;
    
    int count = s.count(5); //gives the count of 5
    cout << count << endl;
    
    auto it_start = s.find(3);
    auto it_end = s.find(5);
    s.erase(it_start, it_end); // It will erase all elements from 3 to 5
    for(auto i: s){
        cout << i << " ";
    }
}


int main(){
    explainUnordedSet();
    return 0;
}