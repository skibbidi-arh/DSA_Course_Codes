#include<bits/stdc++.h>
using namespace std;
int maxsum(int arr[],int n)
{
    int cs=0,largest=0;
  for(int k=0;k<n;k++)   // it keeps track of the largest sum
  {                       // it resets the total sum to 0 when it is less than 0 so it doesnt affect the next part

      cs=cs+arr[k];
      if(cs<0)cs=0;
      largest=max(cs,largest);


  }

   return largest;

}

int main()
{
    int arr[]={-2,3,4,-1,5,-12,6,1,3};
    int n= sizeof(arr)/sizeof(int);
    cout<<maxsum(arr,n)<<endl;

}
