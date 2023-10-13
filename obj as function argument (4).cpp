/* WAP to create a class distance  which contains two data members m and cm . Now , create input and output functions
 by yourself.Create a special function sum which accepts two objects  of same class as  arguments and create next object
  that contains total sum of two measurements.*/
 
 
#include<iostream> 
using namespace std;
class distance
{
	private:
	         float m,cm;
	public: 
	        void input()
	        {
	        	cout<<" meter(s)     : ";
	        	cin>>m;
	        	
	        	cout<<"centimeter(s) : ";
	        	cin>>cm;
	       	}
		 
sum(distance c)
		    {
		    	distance d;
		    	d.m=m+c.m;
		    	d.cm=cm+c.cm;
		    	while (d.cm>100)//converts cm into m 
		    	{
		    		++d.m;
		    		d.cm-=100;
				}
		        cout<<endl<<endl<<"*************************************************************************"<<endl<<endl;
		    	cout<<endl<<endl<<"The sum of two measurements is "<<d.m<<" meter(s) "<<"and "<<d.cm<<" centimeter(s)."<<endl;
		    	 cout<<endl<<endl<<"*************************************************************************"<<endl<<endl;
			}
		
		}a,c;
			
			int main()
			{
			
				cout<<"*************************************************************************"<<endl<<endl;
				
				cout<<"Enter value of first measurement  : "<<endl<<endl;
				a.input();
				cout<<endl<<endl<<"*************************************************************************"<<endl<<endl;
				cout<<"Enter value of second measurement : "<<endl<<endl;
				c.input();
				a.sum(c);
				return 0;
				
			}


