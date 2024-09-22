//this is the prefix sum approach for subarray
// we will create a new prefix sum array
// for a array {1,2,4,-2,3},
// the prefix sum will be {1,3,7,5,8} which is the sum of all the elements till that index
//1=1, 1+2=3, 1+2+4=7, 1+2+4-2=5, 1+2+4-2+3=8
//the sum of a subarray of index(i,j) will be ps[j]-ps[i-1]
// the sum of index (1,3)= 2+4-2 = ps[3]-ps[0] = 5-1 = 4


#include<bits/stdc++.h>
using namespace std;

int largestsum(int arr[],int n)
{
    //calculate prefix sum array
    int prefix[n]={0};
    prefix[0]=arr[0];
    for(int i=1;i<n;i++)
    {

        prefix[i]=prefix[i-1]+arr[i];

    }
    // calculate largest sum
    int largeest=0;
    for(int i=0;i<n;i++)
    {

        for(int j=i;j<n;j++)
        {

            int currentsum= i>0? prefix[j]-prefix[i-1] : prefix[j];
            largeest=max(largeest,currentsum);

        }

    }
    return largeest;

}


int main()
{
int arr[] ={-2,3,4,-1,5,-12,6,1,3};
int n=sizeof(arr)/sizeof(int);
 cout<<largestsum(arr,n)<<endl ;


}
