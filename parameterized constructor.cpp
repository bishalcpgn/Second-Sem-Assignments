/*WAP to create a class vol which contains three data members of float type as l, b and h.Now,
 use a parameterized constructor to initialize its value and find its volume.*/
 
 
#include<iostream>
class vol
{
	float l,b,h,volume; //Default access specifier is private 
     public : vol(float e , float f , float g)
	{
	l=e;
	b=f;
	h=g;
	}
	void process()
	{
	 volume=l*b*h;
		
	}
	void display()
	{
		std::cout<<"The required volume is : "<<volume;
	}
	
 };
 int main()
 {
 	vol a(2,3,4);
 	a.process();
 	a.display();
 	return 0;
 }
