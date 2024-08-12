#include <iostream>
#include <queue>
using namespace std;

void explainPriorityQueue(){
    // Priority Queue is a container in which elements are popped from the container based on certain priority
    // The element with the highest priority is popped first
    // Priority Queue is implemented as a binary heap
    // Priority Queue is implemented as standard template library classes
    // Complexity of the priority queue operations are O(logN)
    // Syntax
    // priority_queue<data_type> PQ_name;
    // Complexities
    // push(): O(logN)
    // pop(): O(logN)
    // top(): O(1)
    // size(): O(1)
    // empty(): O(1)
    

    // To create a max heap
    priority_queue<int> pq;
    pq.push(1);
    pq.push(5); // 5 1
    pq.push(2); // 5 2 1
    pq.push(3); // 5 3 2 1
    pq.push(4); // 5 4 3 2 1

    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    pq.pop();
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    pq.pop();
    pq.pop();
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    pq.emplace(6);
    cout << "Size: " << pq.size() << endl;
    cout << "Top: " << pq.top() << endl;

    // rest all functions are same as vectors
    // empty(), size(), top(), push(), pop()

    // To create a min heap
    priority_queue<int, vector<int>, greater<int>> pq2;
    pq2.push(1);
    pq2.push(5); // 1 5
    pq2.push(2); // 1 2 5
    pq2.push(3); // 1 2 3 5
    pq2.push(4); // 1 2 3 4 5

    cout << "Size: " << pq2.size() << endl;
    cout << "Top: " << pq2.top() << endl;


}

int main(){
    explainPriorityQueue();
    return 0;
}