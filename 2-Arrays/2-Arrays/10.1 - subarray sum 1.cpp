
// first we have brute force approach

#include<bits/stdc++.h>
using namespace std;
int largestsum(int arr[],int n)
{
   int largest =0;
   for(int i=0;i<n;i++)
   {
       for(int j=i;j<n;j++)
       {
           int currentsum=0;

           for(int k=i;k<=j;k++)     // the first two loops basically determines the start end value for every subarray and the third loop sums the elements of that array
           {

               currentsum+=arr[k];
           }

           largest =max(largest,currentsum);
       }

   }
   return largest;
}


int main()
{
int arr[] ={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(int);
 cout<<largestsum(arr,n)<<endl ;


}
