#include <iostream>
#include <list>
using namespace std;

void explainList(){
    // Lists are sequence containers that allow non-contiguous memory allocation
    // Lists are faster in comparison to vectors when it comes to insertion and deletion of elements
    // Syntax
    // list<data_type> List_name;

    list<int> l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);

    for(auto i: l){
        cout << i << " ";
    }
    cout << endl;

    l.push_front(0);
    l.push_back(6);
    l.emplace_back(7);
    l.emplace_front(-1);

    for(auto i: l){
        cout << i << " ";
    }
    cout << endl;

    // rest all functions are same as vectors
    // begin(), end(), rbegin(), rend(), empty(), size(), insert(), erase(), swap(), clear()
}

int main(){
    explainList();
    return 0;
}