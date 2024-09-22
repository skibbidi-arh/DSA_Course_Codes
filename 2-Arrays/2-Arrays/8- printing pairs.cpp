// if the array is a set then print all the subsets of the set or the array


#include<bits/stdc++.h>
using namespace std;
void printpairs(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int x =arr[i];
        for(int k=i+1;k<n;k++)
        {
            int y=arr[k];
            cout<<x<<","<<y<<endl;
        }
        cout<<endl;
    }



}


int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int n= sizeof(arr)/sizeof(int);
   printpairs(arr,n);


}
