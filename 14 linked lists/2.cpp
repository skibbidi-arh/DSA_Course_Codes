#include<bits/stdc++.h>
using namespace std;



class node{
    public:
    int data;
    node* next;

 public:
     node (int d): data(d), next(NULL){}

     int getData()
        {
            return data;
        }

 };
/////////////////////////////////////////

class List{

    node *head;
    node *tail;
    public:
        List():head(NULL),tail(NULL){}

       // pushint data to front

        void pushFront(int data)
        {

            if(head==NULL){

                node *n = new node(data);
                head = tail = n;

            }

            else{

                node *n = new node(data);
                n-> next = head;
                head = n;
            }

        }

         // pushing data to back

        void pushBack(int data){
             if(head==NULL){

                node *n = new node(data);
                head = tail = n;

            }

            else{

                node *n = new node(data);
                tail-> next = n;
                tail =n;
            }



        }

      // getting the head of a list

        node* begin()
        {
            return head;
        }

       // printing the data of the whole list
        void showall(List l){
            node* k = l.begin();
            while(k!=NULL){

                cout<< k->data<< " , ";
                k = k->next;
            }



        }



};





int main()
{

List l ;
l.pushBack(1);
l.pushBack(2);
l.pushBack(3);
l.pushBack(4);
l.pushBack(5);
l.pushFront(0);
l.showall(l);

}
