#include <iostream>
#include <set>
using namespace std;

void explainMultiset(){
    // Multiset is similar to set, but it can have multiple elements with the same value
    // Multiset is implemented as a balanced tree structure that is log(N) for insert and find
    // Multiset is usually used to store elements in sorted order
    // Complexities
    // insert(): O(logN)
    // find(): O(logN)
    // erase(): O(logN)
    // size(): O(1)
    // empty(): O(1)
    
    // Syntax
    // multiset<data_type> Multiset_name;
    // multiset<data_type, greater<data_type>> Multiset_name; // for decreasing order
    // multiset<data_type, less<data_type>> Multiset_name; // for increasing order

    multiset<int> s;
    s.insert(1); // 1
    s.insert(3); // 1 3
    s.insert(2); // 1 2 3
    s.insert(5); // 1 2 3 5
    s.insert(5); // 1 2 3 5 5
    s.insert(4); // 1 2 3 4 5 5

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

    auto it2 = s.lower_bound(3); // >=
    auto it3 = s.upper_bound(3); // >
    cout << *it2 << " " << *it3 << endl;

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
    s.erase(it_start, it_end); // It will erase 3 to 5 but not 5 
}