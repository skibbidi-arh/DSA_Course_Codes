//cin.get() will read only one character at a time but it will also read all the character including spaces and even new lines
// but we have to hive it one char input ar a time
// lets store all the inputs and then print it
#include<bits/stdc++.h>
using namespace std;
int main()
{

char a[100];
char temp=cin.get();
int n=0;
while(temp!='\n')
{

    a[n]=temp;
    n++;
    temp=cin.get();
}
a[n]='\0'; // this is optional
cout<<a<<endl;
cout<<strlen(a)<<endl;
cout<<n;

}
