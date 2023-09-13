
/*WAP to create a clas rect which contains l and b as data members.Also create input and output functions by yourself.
Now create an object and provide some input.Also create an array of obects having six instances and pass existing object
value to the array of object using copy constructor.*/

#include<iostream>
class rect
{
	float l,b;
	public:
	rect(float c , float d)
	{
		l=c;
		b=d;
	}
	void display()
	{
		std::cout<<"\nLength  : "<<l;
		std::cout<<"\nBreadth : "<<b<<"\n\n";
	}
/*	rect (rect &x)
	{
		l=x.l;
		b=x.b;
	}
 */};
  int main()
  {
  
     rect r(2,3);
  	
  	std::cout<<"\nValue of main object : ";
	  r.display();
  	
  	for(int i=1;i<=6;i++)
  	{
  	
  	 rect p[i]=r;
  	std::cout<<"\nObject "<<i<<" in array is created with value :";
  	p[i].display();
	}
	return 0;
   }
  	
  	
  	
  
  
