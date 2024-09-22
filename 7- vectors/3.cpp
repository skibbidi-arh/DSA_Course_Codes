#include<bits/stdc++.h>
using namespace std;

int main()
{


vector<int> v = {1, 2, 3};

cout << v.size()<<endl; // Output: 3

//v.resize(5); // Now v has 5 elements, last 2 are default-initialized (0)

cout << v.empty()<<endl; // Output: false(0) because v is not empty
v.reserve(10); // Allocates space for 10 elements, capacity increases

cout << v.front()<<endl; // Output: 1

cout << v.back()<<endl;

int* p = v.data(); // Pointer to the first element


v.push_back(4); // Now v is {1, 2, 3, 4}


v.pop_back(); // Now v is {1, 2}
}
