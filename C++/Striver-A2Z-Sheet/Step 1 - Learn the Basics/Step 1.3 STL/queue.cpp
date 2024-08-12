#include <iostream>
#include <queue>
using namespace std;

void explainQueue(){
    // Queues are a type of container adaptors which operate in a first in first out (FIFO) type of arrangement
    // Elements are inserted at the back (end) and are deleted from the front
    // Queues are implemented as containers adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements
    // Queues are implemented as standard template library classes
    // Complexity of the queue operations are constant time O(1)
    // Syntax
    // queue<data_type> Queue_name;

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.pop();
    q.pop();
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;

    q.emplace(6);
    cout << "Size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;

    q.back() += 10;
    cout << "Back: " << q.back() << endl;
    

    // rest all functions are same as vectors
    // empty(), size(), front(), back(), push(), pop()
}

int main(){
    explainQueue();
    return 0;
}