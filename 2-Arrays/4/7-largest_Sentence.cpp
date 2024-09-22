#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.get();
    char current[1000];
    char largest[1000];
    int larg=0;
    int curr=0;
    while(n--)
    {
        cin.getline(current,1000);
        curr = strlen(current);
        if(curr>larg)
        {
            larg=curr;
            strcpy(largest,current);
        }

    }

    cout<<larg<<endl;
    cout<<largest<<endl;



}
