// binary search only works on sorted arrays
// we cut the sorted array into two half and then compare the midpoint
// we do the same process for all the parts until only one element remains


#include<bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int key)
{
    int s=0;
    int e=n-1;
    while(s<=e)
    {
       int mid=(s+e)/2;

       if(arr[mid]==key){
        return mid;
       }

       else if(arr[mid]>key){
            e=mid-1;
       }
       else{

        s=mid+1;
       }


    }
    return -1;

}


int main()
{
   int arr[]={2,6,8,23,33,34,55,67,69,70,76,78,79,80,83,87,88,96,98,99};
   int n= sizeof(arr)/sizeof(int);
   int key;
   cout<<"Enter key"<<endl;
   cin>>key;
   int r =binary_search(arr, n, key);

   if(r!=-1) cout<<"THe key is at "<< r<<" Index";
   else cout<<"THe key does not exist in the array";


}
