#include<bits/stdc++.h>
using namespace std;

class Vector{
int *arr;
int cs;
int ms;

public:
    Vector(int max_size=1){
        cs=0;
        ms=max_size;
        arr = new int[ms];
    }

 ////////////////////////////////////////////////////
   void pushback(int d)
   {

       if (cs==ms){

        ms = ms*2;
        int *oldArr = arr;
        arr = new int[ms];
        // copy the elements
        for(int i=0; i<cs ; i++){
            arr[i]= oldArr[i];
        }
        // delet old array
        delete [] oldArr;

       }
       arr[cs]=d;
       cs++;

   }

///////////////////////////////////////////////////////////

void popBack(){
if(cs>=0){
        arr[cs]=NULL;
        cs--;
      }
}

////////////////////////////////////////////

bool isEmpty(){
return cs==0;
}

////////////////////////////

int front(){
return arr[cs-1];
}

////////////////////////////
int back(){
return arr[0];
}

////////////////////////////

int at(int i){
return arr[i];
}

////////////////////////////
int size(){

return cs;
}

////////////////////////////

int capacity(){
return ms;
}
////////////////////////////

void showv(){
if(cs==0){cout<<"Empty vector"<<endl;}
else{

for(int k=0;k<cs;k++){
  cout<<arr[k]<<endl;

}
   }

}

////////////////////////////

};

int main() {

    Vector v;
    v.pushback(1);
    v.pushback(2);
    v.pushback(3);
    v.pushback(4);
    v.pushback(5);
    v.popBack();

    v.showv();

    cout<<v.at(0)<<endl;
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;


}
