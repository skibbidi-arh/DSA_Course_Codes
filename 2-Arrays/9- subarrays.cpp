// s= starting index
// e=ending index

#include<bits/stdc++.h>
using namespace std;
void printpairs(int arr[],int n,int s, int e)
{
    for(int i=s;i<e;i++)
    {


        for(int k=i;k<e;k++)
        {

            for(int l=i;l<=k;l++)
            {
                int y=arr[l];
                cout<<y<<",";

            }
            cout<<endl;
        }
     cout<<endl;
    }

}


int main()
{
   int arr[]={1,2,3,4,5,6,7,8,9};
   int n= sizeof(arr)/sizeof(int);
   printpairs(arr,n,0,8);


}
