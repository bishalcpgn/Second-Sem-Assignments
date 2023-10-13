//WAP to create a class cube which contains a data member of integer type side. Now use unary operator overloading to increase its value.
#include<iostream>

class cube
{ 
	private: int side;
	public: void operator ++()
	{
		side++;
		
	}
	cube (){side=7;}
	
	void display()
	{
		std::cout<<"side\t"<<side<<"\n";
		
	}
}b;
int main()
{
	b.display();
++b;
	b.display();
return 0;
	
}
