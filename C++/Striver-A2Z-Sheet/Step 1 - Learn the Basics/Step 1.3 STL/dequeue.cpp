#include <iostream>
#include <deque>
using namespace std;

void explainDeque(){
    // Deque (Double Ended Queue) is a generalized version of queue
    // Deque allows insertion and deletion at both the ends
    // Deque does not have the capacity of resizing itself
    // Syntax
    // deque<data_type> Deque_name;

    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_back(4);
    d.push_back(5);

    for(auto i: d){
        cout << i << " ";
    }
    cout << endl;

    d.push_front(0);
    d.push_back(6);
    d.emplace_back(7);
    d.emplace_front(-1);

    for(auto i: d){
        cout << i << " ";
    }
    cout << endl;

    // rest all functions are same as vectors
    // begin(), end(), rbegin(), rend(), empty(), size(), insert(), erase(), swap(), clear()
} 