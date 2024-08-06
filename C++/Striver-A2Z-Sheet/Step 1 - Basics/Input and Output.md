## Basic C++ Syntax 

```cpp
#include <iostream>

int main(){
    // Our Code Here and this is a comment
    return 0;
}
```

## Output:

```cpp
#include <iostream>

int main(){
    std::cout << "Hello World";
    return 0;
}
```

std::cout defines that we are using the cout function from the standard library. 

## New Line: 
There are two ways to do that. 

1. Using the **/n** :

```cpp
#include <iostream>

int main(){
    std::cout<<"Hello"<<"\n" ;
    std::cout<<"World" ;
}
```

2. Using the **endl** :
```cpp
#include <iostream>

int main(){
    std::cout<<"Hello"<<std::endl ;
    std::cout<<"World" ;
}
```
## Using namespace std
By adding using **namespace std;** at the beginning of your program, you're telling the compiler that you want to **use all the names from the std namespace** without explicitly specifying **std::** each time. This can make your code cleaner and more concise.

```cpp
#include <iostream>

int main(){
    std::cout<<"Hello"<<endl ;
    std::cout<<"World" ;
}
```


## Taking User Input using cin
One of the fundamental aspects of programming is taking input from the user. In C++, this is achieved with the help of the cin stream, which allows you to receive input from the user via the terminal or console.

```cpp
#include<iostream>
using namespace std;

int main() {
    int x;
    cin >> x;
    cout << "Value of x: " << x;
    return 0;
}
```

To accept multiple inputs, we can simply use the >> operator with cin for each variable we want to receive input for. Let's demonstrate this by taking two variables, x, and y, as input and displaying their values:

```cpp
#include<iostream>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x: " << x << “ and y: “ <<y;
    return 0;
}
```
#### Note: 

To make the process more convenient, there's a shortcut that allows you to include almost all standard libraries at once using **#include<bits/stdc++.h>**

The bits/stdc++.h header is a shortcut that includes a vast number of standard C++ libraries, making it easier to access a wide range of functions and classes without specifying each library individually. It's a time-saving approach for programmers, especially when you need several standard libraries in your code.

However, it's important to be aware of potential compatibility issues and consider the impact on compile time, especially in large projects. When used judiciously, it can be a valuable asset in streamlining your C++ development process.

```cpp
#include<bits/stdc++.h>
using namespace std;

int main() {
    int x;
    int y;
    cin >> x >> y;
    cout << "Value of x: " << x << “ and y: “ <<y;
    return 0;
}
```
