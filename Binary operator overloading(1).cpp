/*Create a class which contains three data members l,b,h.Now, use constructor to provide values
 to the data members.Now, oveload + operator to add sum of two instances of box's objects.*/
#include<iostream>
using namespace std;
class box
{
  int l,b,h;
  public:box() 
  {
    l=2;
    b=4;
    h=6; 
  }
  box(int a,int x,int c)
  {
    l=a;
    b=x;
    h=c; 
  }
  void display()
  {
      cout<<"\nl="<<l;
      cout<<"\nb="<<b;
      cout<<"\nh="<<h;
  }
  box operator +(box y)
  {
   box e;
   e.l=l+y.l;
   e.b=b+y.b;
   e.h=h+y.h;
   return e;
  }
  };
  int main()
   {
       box b1;
       box b2(2,3,4);
       box b3=b1+b2; // works same as b1.operator+(b2),b1 calls the function and the 
                              //value of b2 is passed as argument
    cout<<"Value of b1";
    b1.display();
    cout<<"\n\nValue of b2";
    b2.display();
    cout<<"\n\nFinal Value";
    b3.display();
    return 0;

   }
