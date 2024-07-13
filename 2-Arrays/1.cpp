#include<bits/stdc++.h>
using namespace std;
int main()
{

    int marks[100];
    for( int i=0;i<4;i++)
    {
        cin>>marks[i];
    }

    for( int i=0;i<50;i++)
    {
        cout<<marks[i]<<",";  // the array was not initialized so the rest of the undeclared elements of the array will all be garbage values
    }
    printf("\n");



    int m[100]={0};
    for( int i=1;i<5;i++)
    {
        cin>>m[i];
    }

    for( int i=0;i<50;i++)
    {
        cout<<m[i]<<",";  // the array was initialized with 0 so the rest of the undeclared elements of the array will all be 0
    }




}
