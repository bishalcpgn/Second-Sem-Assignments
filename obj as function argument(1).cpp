/* WAP to create class student which contains four data members Name , English , Nepali and Maths .Now create necessary 
member functions for input and output.Create the function which compares the average of two  students and display the
 highest average.*/

#include<iostream>
using namespace std;
class student
{
	private: 
	char name[10] ;
	float m,e,l;
	public:
	 void input()
	{
		cout<<"*************************************************************************\n";
		cout<<"Enter students name : " ;
		cin>>name;
		cout<<"\nEnter marks in   Maths : ";
		cin>>m;
		cout<<"Enter marks in English : ";
		cin>>e;
		cout<<"Enter marks in Nepali  : ";
		cin>>l;
		
	}
     average(student s)
     {
       float d=(e+m+l)/3;
       float f=(s.e+s.m+s.l)/3;
       cout<<"\n*************************************************************************\n\n";
       
      
       
       if(d>f) 
       {
       	cout<<"Student with highest average is " <<name << " with "<<d<<" average marks .";
	   }
	   else if (d==f) 
	  {
		 cout<<"The average is same.";
		 
    	}
     else if(d<f)
     {
     	 cout<<endl<<"Student with highest average is " <<s.name << " with "<<f<<" average marks .";
	 }
     
	
	 
	 }
}a,b;
int main()
{
	a.input();
	cout<<"\n";
	b.input();
	a.average(b);
	cout<<"\n\n*************************************************************************\n";
	return 0;

}
