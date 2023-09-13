//Constructor Overloading

#include<iostream>
using namespace std;
class cons
{
	int a,b;
public : 	cons()
	{
		
		a=0;
		b=0;
	
	}
	cons(int c)
	{
		a=b=c;
		
		
	}
	cons(int x , int y )
	{
		a=x;
		b=y;
			
	}
	void display()
	{
	cout<<"a = "<<a<<endl;
	cout<<"b = "<<b;	
	}
 } ;
 int main()
 {
 	cons x;
 	cons y(10);
 	cons z(30,40);
 	cout<<"In object x :\n";
 	x.display();
 	cout<<"\n\nIn object y :\n";
 	y.display();
 	cout<<"\n\nIn object z :\n";
    z.display();
 	return 0;
 	
 }
