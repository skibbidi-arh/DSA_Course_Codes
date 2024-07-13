// select one position ans swap it with the minimum value of the remaining part of the array

#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
    for(int t=0;t<n-1;t++)
    {
        for(int j=0;j<n-t; j++)
        {
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]);
        }

    }
}

int main()
{
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n= sizeof(arr)/sizeof(int);
  insertionSort(arr,n);
  for(auto x:arr)
  {
      cout<<x<<" , ";
  }
}
