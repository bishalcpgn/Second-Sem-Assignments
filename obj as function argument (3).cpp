/* WAP to create a class box which contains three data members l, b and h . Now , create input and output functions
 by yourself.Create a special function sum which accepts two objects  of same class as  arguments to find sum of their volume.*/
 
 
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
		 
float sum(box c)
		    {
		    	float x=l*b*h;
		    float y =c.l*c.b*c.h;
		    	float z=x+y;
		    	return z ;//returns total sum to the main 
		    	
			}
			
		};
			
			int main()
			{
				box a,c;
				cout<<"*************************************************************************"<<endl;
				
				cout<<"Enter value for first box  : "<<endl;
				a.input();
				cout<<"*************************************************************************"<<endl;
				cout<<"Enter value for second box : "<<endl;
				c.input();
				cout<<"**************************************************************************"<<endl;
				cout<<"The sum of volume of two boxes is : "<<a.sum(c)<<endl;//We are passing obj c as argument and function sum is called by obj a.
				return 0;
				
			}


