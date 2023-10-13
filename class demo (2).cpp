
/* WAP to create class employee which contains name , salary and tax as data members.Now create necessary 
member functions for input and output.*/

#include<iostream> 
using namespace std;
class employee
{
	private: 
	char name[20] , salary[20], tax[10];
	public:
	 void input()
	{
		cout<<"Enter name : " ;
		cin>>name;
		cout<<"Enter salary : ";
		cin>>salary;
		cout<<"Enter tax amount : ";
		cin>>tax;
	}
	public: output()
	{
	 cout<<"You Entered - \n";
	 cout<<"\nName : "<<name<<"\nSalary : "<<salary<<"\nTax Amount : "<<tax;
	}
};
int main()
{
	employee a;
	a.input();
	system("cls");
	a.output();
	return 0;

}
