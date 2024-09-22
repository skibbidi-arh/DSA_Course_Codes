#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[100];
  cin.getline(str,10);
  //cin.getLine Mainly has two parameters, one is the string and other is the maximum character limit in the string.
  // it will stop at a newline(enter) and also if the characters exceed the given limit
  cout<<str<<endl;


  char str2[100];
  cin.getline(str2,10,'.');
  //there can also be an optional 3rd parameter where we can tell it to stop at a specific character
  cout<<str2<<endl;



}
