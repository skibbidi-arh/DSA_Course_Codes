#include<bits/stdc++.h>
using namespace std;
 int linear(int arr[],int n,int key)
 {
     int s=0;
     int e=n-1;
     for(int k=0;k<n;k++)
     {
         if(arr[k]==key)return k;

     }


     return -1;

 }


 int main()
 {

     int arr[]={10,223,3,4,35,61,75,78,18};
     int n = sizeof(arr)/4;
     cout<<"Enter the key ";
     int key;
     cin>>key;
     int in= linear(arr,n,key);
     if(in!=-1) cout<<"the key is at "<<in<<" index";
     else cout<<"Key is not found in the array";

 }
