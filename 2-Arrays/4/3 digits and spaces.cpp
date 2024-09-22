//given a sentence, count the number of digits, spaces and alphabets in the sentence
#include<bits/stdc++.h>
using namespace std;
int main()
{

int alpha=0,dig=0,spc=0;
char temp=cin.get();

while(temp!='\n')
{
    if(temp>='0' and temp<='9') dig++;
    else if((temp>='a' and temp<='z') or (temp>='A' and temp<='Z'))alpha++;
    else if(temp== ' ' or temp=='\t')spc++;
    temp=cin.get();
}

cout<<"Alphabets: "<<alpha<<endl;
cout<<"digits: "<<dig<<endl;
cout<<"spaces: "<<spc<<endl;;

}
