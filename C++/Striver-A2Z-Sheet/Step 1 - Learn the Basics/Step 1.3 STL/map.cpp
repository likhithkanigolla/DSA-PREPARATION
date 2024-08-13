#include <iostream>
#include <map>
using namespace std;

void explainMap(){
    // Map is an associative container that stores elements in key value pair
    // Map is implemented as balanced tree structure that is why it is log(N) for insert and find
    // Map is usually used to store key value pair where key is unique
    // Complexities
    // insert(): O(logN)
    // find(): O(logN)
    // erase(): O(logN)
    // size(): O(1)
    // empty(): O(1)
    
    // Syntax
    // map<key_type, data_type> Map_name;
    // map<key_type, data_type, greater<key_type>> Map_name; // for decreasing order
    // map<key_type, data_type, less<key_type>> Map_name; // for increasing order

    map<int, int> m;
    m[1] = 2; // 1->2
    m[2] = 4; // 1->2, 2->4
    m[3] = 6; // 1->2, 2->4, 3->6
    m.insert({4, 8}); // 1->2, 2->4, 3->6, 4->8
    m.insert({4, 10}); // 1->2, 2->4, 3->6, 4->8
    m.insert({5, 10}); // 1->2, 2->4, 3->6, 4->8, 5->10

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

    int count = m.count(5); // 0 or 1, as map contains unique keys
    cout << count << endl;

    auto it_start = m.find(2);
    auto it_end = m.find(5);
    m.erase(it_start, it_end); // It will erase 2 to 5 but not 5
}

int main(){
    explainMap();
    return 0;
}