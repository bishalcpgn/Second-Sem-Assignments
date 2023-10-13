//Destructor

#include<iostream>
class  hello
{
	public : 
		hello()
		{
			std::cout<<"I am constructor. \nI initialize values for an object.\n\n";
		}
		~hello()
		{
			std::cout<<"I am destructor.\nI free up the memory used by the object";
		}
}a;
int main()
{
	return 0;
}
