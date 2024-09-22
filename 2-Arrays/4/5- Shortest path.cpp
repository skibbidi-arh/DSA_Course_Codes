#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x=0;
    int y=0;
    char str[1000];
    cin.getline(str,1000);
    for(int i=0; str[i]!='\0';i++)
    {
        switch(str[i])
        {
        case 'N':
            y++;
            break;

         case 'S':
            y--;
            break;

         case 'E':
            x++;
            break;
          case 'W':
            x--;
            break;

        }

    }

 if(x>=0 and y>=0)
 {
     while(x--){cout<<"E";}
     while(y--){cout<<"N";}

 }

  if(x<=0 and y>=0)
 {
     while(x--)
        {cout<<"W";}
     while(y--)
     {cout<<"N";}

 }

 if(x<=0 and y<=0)
 {
     while(x--){cout<<"W";}
     while(y--){cout<<"S";}

 }
 if(x>=0 and y<=0)
 {
     while(x--){cout<<"E";}
     while(y--){cout<<"S";}

 }



}

