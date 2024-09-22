#include<bits/stdc++.h>
using namespace std;

void fun(int arr[])
{

    int n = sizeof(arr);
    cout<<"In the function it is "<<n<<"\n";

    arr[0]=100;                                   //here the sizeof function detects the size of the array in bytes
                                                // in main it determines the actual size of the array declared
                                                 // but in the function, the pointer to the first element of the array is passed and the pointer is of 8 bytes
                                                 //thats why in main, n is 24 and in function n is only 8
                                                 // as the pointer is passed to the function as reference, if it is changed in the function it also changes in main

}

int main()
{

    int arra[]={1,2,3,4,5,6,7,8};
    int n = sizeof(arra);
    cout<<"in main it is " <<n<<"\n";
    fun(arra);
    for(int k=0; k<n/4;k++)
    {

        cout<<arra[k]<<"  ";   // the first element of the array was changed to 100 in the function through pointer, so it will print 100 in the min also
    }


}
