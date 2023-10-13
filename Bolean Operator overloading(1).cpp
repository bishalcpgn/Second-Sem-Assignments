/*Wap to create a class coordinate which contains two data member x and y.Now,overload > operator 
to compare two objects of coordinate class and print the greatest one.*/
#include<iostream>
using namespace std;
class coordinate
{
    float x,y;
     public : void input() 
    {
        cout<<"\nValue of x = ";
        cin>>x;
        cout<<"Value of y = ";
        cin>>y;
    } 
    void display()
    {
        cout<<"\nX = "<<x;
        cout<<"\nY = "<<y;
    }
    bool operator > (coordinate a1)
    {
        if ((x>a1.x) && (y>a1.y)) 
        return true;
        else 
        return false;
    }
};
int main()
{
    coordinate a1,b;
    cout<<"Enter first value : ";
    a1.input();
    cout<<"\nEnter second value : ";
    b.input();
    if (a1>b) 
    a1.display();
    else
     b.display();
    return 0;

}
