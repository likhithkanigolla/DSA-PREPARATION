#include <iostream>
#include <vector>
using namespace std;

void explainVectors(){
    // Vectors are same as dynamic arrays with the ability to resize itself automatically when an element is inserted or deleted
    // Vectors are sequence containers representing arrays that can change in size
    // Vectors use contiguous storage locations for their elements, which means that their elements can also be accessed using offsets on regular pointers to its elements, and just as efficiently as in arrays
    // Vectors are created using template class that can be found in <vector> header file
    // Syntax
    // vector<data_type> Vector_name;
    // vector<data_type> Vector_name(size);
    // vector<data_type> Vector_name(size, value);
    // vector<data_type> Vector_name(begin_iterator, end_iterator);
    // Vector_name.push_back(value);
    // Vector_name.pop_back();
    // Vector_name.size();
    // Vector_name.capacity();
    // Vector_name.resize(size);
    // Vector_name.empty();
    // Vector_name.clear();
    // Vector_name.front();
    // Vector_name.back();
    // Vector_name.at(index);
    // Vector_name.begin();
    // Vector_name.end();
    // Vector_name.insert(iterator_position, value);
    // Vector_name.erase(iterator_position);
    // Vector_name.erase(start_iterator, end_iterator);
    // Vector_name.swap(Vector_name2);
    // Vector_name.assign(iterator_position, value);
    // Vector_name.assign(size, value);
    // Vector_name.assign(Vector_name2.begin(), Vector_name2.end());
    // Vector_name.assign({1, 2, 3, 4, 5});
    // Vector_name = {1, 2, 3, 4, 5};
    // Vector_name = Vector_name2;
    // Vector_name == Vector_name2;
    // Vector_name != Vector_name2;
    // Vector_name < Vector_name2;
    // Vector_name <= Vector_name2;
    // Vector_name > Vector_name2;
    // Vector_name >= Vector_name2;
    // Vector_name.swap(Vector_name2);
    // Vector_name.clear();
    // Vector_name.shrink_to_fit();
    // Vector_name.reserve(size);
    // Vector_name.emplace(iterator_position, value);
    // Vector_name.emplace_back(value);
    // Vector_name.emplace_back(value1, value2);
    // Vector_name.emplace_back(value1, value2, value3);
    // Vector_name.emplace_back(value1, value2, value3, value4);
    // Vector_name.emplace_back(value1, value2, value3, value4, value5);

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);

    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    v.pop_back();
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    // Capacity is the size of the storage space currently allocated for the vector, expressed in terms of elements
   
    v.resize(3);
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

    cout<<v.empty()<<endl;

    v.clear();
    for(int i=0; i<v.size(); i++){
        cout<<"since vector is empty, this loop will not run";
        cout<<v[i]<<"";
    }
    cout<<endl;

    vector<int> v1= {1, 2, 3, 4, 5};
    cout<<v1.front()<<" "<<v1.back()<<endl;

    cout<<v1.at(2)<<endl;
    
    vector<int> v2= {6, 7, 8, 9, 10};
    v1.swap(v2); // Swaps the elements of two vectors
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    for(int i=0; i<v2.size(); i++){
        cout<<v2[i]<<" ";
    }
    cout<<endl;

    vector<int> v3= {11, 12, 13, 14, 15};
    v3.insert(v3.begin()+2, 20); // Inserts 20 at the 2nd index
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    v3.erase(v3.begin()+2); // Erases the element at the 2nd index
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    v3.erase(v3.begin()+1, v3.begin()+3);
    for(int i=0; i<v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;

    vector<int> v4= {1, 2, 3, 4, 5};
    vector<int> v5= {6, 7, 8, 9, 10};
    v4.swap(v5);
    for(int i=0; i<v4.size(); i++){
        cout<<v4[i]<<"";
        cout<<v5[i]<<" ";
    }
    cout<<endl;

    vector<int> v6= {1, 2, 3, 4, 5};
    vector<int> v7= {6, 7, 8, 9, 10};
    v6.assign(v7.begin(), v7.end()); // Assigns the values of v7 to v6
    for(int i=0; i<v6.size(); i++){
        cout<<v6[i]<<" ";
    }
    cout<<endl;

    vector<int> v8= {1, 2, 3, 4, 5};
    v8.assign(3, 10);
    for(int i=0; i<v8.size(); i++){
        cout<<v8[i]<<" ";
    }
    cout<<endl;

    vector<int> v9= {1, 2, 3, 4, 5};
    v9.assign({11, 12, 13, 14, 15});
    for(int i=0; i<v9.size(); i++){
        cout<<v9[i]<<" ";
    }
    cout<<endl;

    vector<int> v10= {1, 2, 3, 4, 5};
    vector<int> v11= {6, 7, 8, 9, 10};
    v10 = v11;
    for(int i=0; i<v10.size(); i++){
        cout<<v10[i]<<" ";
    }
    cout<<endl;

    vector<int> v12= {1, 2, 3, 4, 5};
    vector<int> v13= {6, 7, 8, 9, 10};
    cout<<(v12==v13)<<endl;
    cout<<(v12!=v13)<<endl;
    cout<<(v12<v13)<<endl;
    cout<<(v12<=v13)<<endl;
    cout<<(v12>v13)<<endl;
    cout<<(v12>=v13)<<endl;

    vector<int> v14= {1, 2, 3, 4, 5};
    vector<int> v15= {6, 7, 8, 9, 10};
    v14.swap(v15);
    for(int i=0; i<v14.size(); i++){
        cout<<v14[i]<<" ";
    }
    cout<<endl;

    vector<int> v16= {1, 2, 3, 4, 5};
    v16.clear();
    cout<<v16.size()<<endl;

    vector<int> v17= {1, 2, 3, 4, 5};
    v17.shrink_to_fit();
    cout<<v17.capacity()<<endl;

    vector<int> v18= {1, 2, 3, 4, 5};
    v18.reserve(100);
    cout<<v18.capacity()<<endl;

    vector<int> v19= {1, 2, 3, 4, 5};
    v19.emplace(v19.begin()+2, 20);
    for(int i=0; i<v19.size(); i++){
        cout<<v19[i]<<" ";
    }
    cout<<endl;

    vector<int> v20= {1, 2, 3, 4, 5};
    v20.emplace_back(20);
    for(int i=0; i<v20.size(); i++){
        cout<<v20[i]<<" ";
    }
    cout<<endl;

    vector<int>::iterator it= v20.begin();// Iterator is a pointer that points to an element of a container
    it++;
    cout<<*it<<endl;
}

int main(){
    explainVectors();
    return 0;
}

// Output
// 1 2 3 4 5 
// 1 2 3 4 
// 4
// 8
// 1 2 3 
// 0

// 1 5
// 3
// 6 7 8 9 10 
// 1 2 3 4 5 
// 11 12 20 13 14 15 
// 11 12 13 14 15 
// 11 14 15 
// 61 72 83 94 105 
// 6 7 8 9 10 
// 10 10 10 
// 11 12 13 14 15 
// 6 7 8 9 10 
// 0
// 1
// 1
// 1
// 0
// 0
// 6 7 8 9 10 
// 0
// 5
// 100
// 1 2 20 3 4 5 
// 1 2 3 4 5 20 