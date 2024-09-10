#include<bits/stdc++.h>
#include<vector> // this is not necessary if we use bits/stdc++
using namespace std;
int main()
{

vector<int> arr = {1,2,10,12,15};

arr.pop_back(); //removes the last element
arr.push_back(16);

cout<<arr.size()<<endl; //outputs the size (6)

cout<<arr.capacity()<<endl;


for(int i=0;i<arr.size();i++)cout<<arr[i]<<endl;




}
