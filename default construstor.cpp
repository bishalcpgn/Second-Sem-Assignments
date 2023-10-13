/*WAP to create a class rectangle which contains two data members of float type as l and b.Now,
 use a default constructor to initialize its value and find its area.*/
 
  
#include<iostream>
class rectangle
{
	float l,b,a; //Default access specifier is private
     public : rectangle()//constructor name is that of the class and don't have return type
	{
		l=2;
		b=3;
	}
	void area()
	{
	 a=(l*b);
		
	}
	void display()
	{
		std::cout<<"Area of the rectangle is : "<<a;
	}
	
 }c;
 int main()
 {
 	c.area();
 	c.display();
 	return 0;
 }
