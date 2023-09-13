/*Create a class rectangle which contains two data member l and b.Create a function to find area 
of rectangle.Now create another class compute which have function perimeter to calculate perimeter
of a rectangle and make it as the child of rectangle class. use appropriate input and output 
function by yourself.*/
#include<iostream>
using namespace std;
class rectangle
{
    protected : float l ,b;
    public : void input()
    {
        cout<<"Enter value of l = ";
        cin>>l;
        cout<<"Enter value of b = ";
        cin>>b;
    }
    void area()
    {
        cout<<"Area = "<<l*b;
    }
};
class compute: public rectangle
{
    public: void perimeter()
    {
        cout<<"\nPerimeter = "<< 2*(l+b); ;
    }
}a;
    int main()
    {
        a.input();
        a.area();
        a.perimeter();
        return 0;
    }

    

    
