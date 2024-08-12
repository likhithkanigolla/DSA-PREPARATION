#include <iostream>
#include <stack>
using namespace std;

void explainStack(){
    // Stacks are a type of container adaptors with LIFO(Last In First Out) type of working, where a new element is added at one end and an element is removed from that end only
    // Stacks are implemented as containers adaptors, which are classes that use an encapsulated object of a specific container class as its underlying container, providing a specific set of member functions to access its elements
    // Elements are pushed/popped from the "back" of the specific container, which is known as the top of the stack
    // Complexity of the stack operations are constant time O(1)

    // Syntax
    // stack<data_type> Stack_name;

    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;

    s.pop();
    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;

    s.pop();
    s.pop();
    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;

    s.emplace(6);
    cout << "Size: " << s.size() << endl;
    cout << "Top: " << s.top() << endl;

    // rest all functions are same as vectors
    // empty(), size(), top(), push(), pop()
}

int main(){
    explainStack();
    return 0;
}
