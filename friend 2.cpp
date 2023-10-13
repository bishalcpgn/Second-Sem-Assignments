//WAP to add values of two class using friend function.

#include<iostream>
using namespace std;
class B;//forward declaration of class B so that compiler can know its existance 
class A
{
	int x ;
	public:void input()
	    	{
		    	cout<<"Enter value for class A : ";
		    	cin>>x;
	    	}
		
		
		friend void add(A a, B b);
};


class B
{
	private:
		int y;
		
	public: void input()
		{
			cout<<"Enter value for class B : ";
			cin>>y;
		}
	
	
		friend void add(A a, B b);
};


void add(A a, B b)

{
	cout<<"\nValue of class A : "<<a.x;
	cout<<"\nValue of class B : "<<b.y;
	cout<<"\nTheir total sum is : "<<a.x+b.y;
}

int main(){
	A a1;
	B b1;
	a1.input();
	b1.input();
	add(a1, b1);
	return 0;
} 
 
