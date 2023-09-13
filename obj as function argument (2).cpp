/* WAP to create a class box which contains three data members l, b and h . Now , create input and output functions
 by yourself.Create a special function sum which accepts two objects  of same class as  arguments and create a new 
 box which cobtains sum of l,b and h of two boxes.*/
 
 
#include<iostream>
using namespace std;
class box
{
	private:
	         float l,b,h;
	public: 
	        void input()
	        {
	        	cout<<"Length  : ";
	        	cin>>l;
	        	cout<<"breadth : ";
	        	cin>>b;
	        	cout<<"height  : ";
	        	cin>>h;
	        	
	        	
			}
		 
box sum(box c)//Here, return type must be class name.
		    {
		    	box d;
		    	d.l=l+c.l;
		    	d.b=b+c.b;
		    	d.h=h+c.h;
		    	return d;//returns object to the main 
		    	
			}
			void display()
			{
				cout<<"The sum of length  of two boxes is "<<l<<endl;
				cout<<"The sum of breadth of two boxes is "<<b<<endl;
				cout<<"The sum of breadth of two boxes is "<<h<<endl;
			}
		};
			
			int main()
			{
				box a,c,e;
				cout<<"*************************************************************************"<<endl;
				
				cout<<"Enter value for first box  : "<<endl;
				a.input();
				cout<<"*************************************************************************"<<endl;
				cout<<"Enter value for second box : "<<endl;
				c.input();
			e=a.sum(c);//receives object value from above function and assigns it to object e.We are passing obj c as argument and function sum is called by obj a.
				cout<<"**************************************************************************"<<endl;
			e.display();//displays final sum
			cout<<"**************************************************************************"<<endl;
				return 0;
				
			}


