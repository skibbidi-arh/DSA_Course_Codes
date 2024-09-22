// its like inserting  card in its correct position in a sorted bunch of cards
// divide the array into two parts, sorted part and unsorted part
// take one element from the unsorted part and then insert into the correct position in the sorted part

#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int n)
{
   for(int i=1;i<n;i++)
   {
       int current = arr[i];
       int prev = i-1;
       while(prev>=0 and arr[prev]>current)
       {
           arr[prev+1]=arr[prev];
           prev--;
       }
       arr[prev+1]=current;
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

