/* WAP to calculate area of a  circle using OOPS. */
//Compiler used : Dev C++ ___ ver-5.11

#include<iostream>
const int PI=3.14;  // PI is integer variable and its value is fixed to 3.14 
using namespace std;
class circle 
{
	float r,a;
	public :
		void input()
		{
			cout<<"Enter Radius : ";
			cin>>r;
		}
		void process()
		{
			 a = PI*(r*r);
		}
		void output()
		{
			cout<<"\nThe area of circle having radius "<<r<<" is "<<a;
			
		}
}a;
int main()
{
	top:
	a.input();
	a.process();
	a.output();
	
	cout<<"\n\n\nDo you want to continue ?"<<"\n\n Enter Y to continue : ";
	char ab;
	 cin>>ab;
if(ab == 89) //ASCII value of Y is 89
	{
	system("cls");//clears the screen
	 goto top;
	
	}
	else  
	{
		 system("cls");
		cout<<"Thank you ";
	}
		return 0;
}
