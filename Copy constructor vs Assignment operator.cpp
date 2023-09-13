/*

Copy costructor assigns the value of new object to the value previously created object (while new obj is created).


When both the objects are created previously then the value of object can be assigned to that of another 
with the help of overloaded assignment statement.

*/

#include<iostream>
class demo
{
	int a,b;
	public :
		demo()
		{
			//This is made for object z in line 44.
		}
			
	
			
	
	demo(int c , int d)
	{
		a=c;
		b=d;
	}
	void display()
	{
		std::cout<<"\na = "<<a;
		std::cout<<"\nb = "<<b<<"\n";
	}
	
	
/*	demo(demo &x)
	{                   
		l=x.l;                    If programmmer doesn't define any copy constructor , the compiler supplies its owmn copy constructor.
                                  So if you comment this part , still the program works fine. 
		b=x.b;
	
	} */
	
	
};

int main()
{
	demo x(10,20);//obj x is created 
	demo y=x; //calling copy constructor 
	demo c(x);//next way of calling copy constructor
	
	demo z; //new object z created and it needs auto initialization.
	z=x;//obj z is initialized with assignment statement 
	std::cout<<"Value of x : ";
	x.display();
	std::cout<<"\nValue of y : ";
	y.display();
	std::cout<<"\nValue of z : ";
	z.display();
	std::cout<<"\nValue of c : ";
	c.display();
	
	return 0;
	

	
}
	
	
	


