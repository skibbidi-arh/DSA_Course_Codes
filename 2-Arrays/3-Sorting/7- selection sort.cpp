// select one position ans swap it with the minimum value of the remaining part of the array

#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n)
{
    for(int pos=0;pos<n-1;pos++)
    {
        int min_position =pos;
        for(int j=pos; j<n;j++)
        {
            if(arr[j]<arr[min_position]) min_position=j;

        }
        swap(arr[min_position],arr[pos]);
    }


}

int main()
{
  int arr[]={-2,3,4,-1,5,-12,6,1,3};
  int n= sizeof(arr)/sizeof(int);
  selectionSort(arr,n);
  for(auto x:arr)
  {
      cout<<x<<" , ";
  }
}
