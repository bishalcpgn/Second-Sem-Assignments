//Function Overloading 

#include<iostream>
using namespace std;
class over 
{
	
	public :
	area (int a)
	{
		cout<<"\nThe area of the square is    : "<<a*a;
	}
	area(int l , int b)
	{
		cout<<"\nThe area of the rectangle is : "<<l*b;
	}
	area(double r)
	{
		cout<<"\nThe area of the circle is    :"<<3.14*r*r; 
	}

}a;
	

  
 
int main()
{
	cout<<"Length of side of square be 5 .";
	a.area(5);
	
	cout<<"\n\nLength and breadth  of rectangle  be 5 and 10 respct .";
	a.area(5,10);
	
	cout<<"\n\nRadius of circle be 0.9 ";
	a.area(0.9);
	
	
	return 0;
	
	
	
	
}
