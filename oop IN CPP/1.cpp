#include<bits/stdc++.h>
using namespace std;



class Car{
public:
  string brand;
  int year;
  public:
  Car(string b,int y)
  {
      brand=b;
      year=y;

  }
void showInfo()
{

    cout<<"brand :"<<brand<< ", "<<year;
}



};

int main()
{
    Car car1("Toyota",2019);
    car1.showInfo();


}
