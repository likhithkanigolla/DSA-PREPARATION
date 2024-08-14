#include <iostream>
#include <map>
#include <list>
#include <array> // Include the <array> header
using namespace std;

void explainExtra(){
    list<int> l={1,3,2,8,3,5};
    sort(l.begin(), l.end());
    for(auto i: l){
        cout << i << " ";
    }
    cout << endl;

    array<int, 5> a = {1, 3, 2, 8, 3}; // Change array initialization
    sort(a.begin() + 1, a.begin() + 4); // Fix the sort function call
    for(auto i: a){
        cout << i << " ";
    }
    cout << endl;

    sort(a.begin(), a.end(), greater<int>()); // Fix the sort function call

    pair<int, int> p[] = {{1, 3},{1,2},{3,8},{4,6}, {5,5}};
    //sort the pair array according to the second element
    // If second element is same then sort according to the first element but in decreasing order
    sort(p, p+5, [](pair<int, int> a, pair<int, int> b){
        if(a.second == b.second){
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    int num=5;
    int cnt=__builtin_popcount(num);

    long long int num1=19930283;
    int cnt1=__builtin_popcountll(num1);

    string s="abc";
    do{
        cout<<s<<endl;
    }
    while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a.begin(), a.end());
}

int main(){
    explainExtra();
    return 0;
}