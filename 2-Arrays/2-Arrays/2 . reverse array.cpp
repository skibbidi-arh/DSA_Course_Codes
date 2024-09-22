#include<bits/stdc++.h>
using namespace std;
 void rev(int arr[],int n)
 {
     int s=0;
     int e=n-1;
     for(int k=0;k<n/2;k++)
     {
         swap(arr[s],arr[e]);
         s++;
         e--;
                                // the values are swapped in memory
     }

 }


 int main()
 {

     int arr[]={1,2,3,4,5,6,7,8,9};
     int n = sizeof(arr)/4;
     rev(arr,n);
     for(int k=0;k<n;k++)
     {

         cout<<arr[k]<<" " ;
     }


 }
