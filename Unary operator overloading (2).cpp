//WAP to create a class student which contains marks of a student in 5 subjects. Now use a unary operator overloading to deccrease students marks.


#include<iostream>
using namespace std;
class student 
{
	private :
		int eng,maths,nep,c,soc;
		public:
			void operator --()
			{
				--eng;
				--maths;
				--nep;
				--c;
				--soc;
			}
			
			student()
			{
				maths=eng=nep=c=soc=50;
			}
			
			void display()
			{
				cout<<"marks";
				cout <<" "<<eng<<" "<<maths<<" "<<nep<<" "<<c<<" "<<soc<<" "<<"\n";
			}
			
}b;
int main()
{
	b.display();
	--b;
	b.display();
	return 0;
	
}
