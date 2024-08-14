#include <iostream>
#include <map>
using namespace std;

void explainMultiMap(){
    // MultiMap is similar to Map, but it can have multiple values for the same key
    // MultiMap is implemented as balanced tree structure that is why it is log(N) for insert and find
    // MultiMap is usually used to store key value pair where key is not unique
    // Complexities
    // insert(): O(logN)
    // find(): O(logN)
    // erase(): O(logN)
    // size(): O(1)
    // empty(): O(1)
    
    // Syntax
    // multimap<key_type, data_type> MultiMap_name;
    // multimap<key_type, data_type, greater<key_type>> MultiMap_name; // for decreasing order
    // multimap<key_type, data_type, less<key_type>> MultiMap_name; // for increasing order

    multimap<int, int> m;
    m.insert({1, 2}); // 1->2
    m.insert({2, 4}); // 1->2, 2->4
    m.insert({3, 6}); // 1->2, 2->4, 3->6
    m.insert({4, 8}); // 1->2, 2->4, 3->6, 4->8
    m.insert({4, 10}); // 1->2, 2->4, 3->6, 4->8, 4->10
    m.insert({5, 10}); // 1->2, 2->4, 3->6, 4->8, 4->10, 5->10

    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    auto it = m.find(3); //finds the element equal to 3 not the index
    if(it == m.end()){
        cout << "Not Found\n";
    }else{
        cout << "Found\n";
        cout << it->first << " " << it->second << endl;
    }

    m.erase(3);
    for(auto i: m){
        cout << i.first << " " << i.second << endl;
    }

    m.clear();
    cout << m.size() << endl;

    int count = m.count(5); // 0 or 1, as map
}