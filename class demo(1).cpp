/*WAP to create a class student which contains name, address, and phone number as data member.Now, create 
two member functions inorder to input and print data.*/



#include<iostream>
class student
{
	private: 
	char name[20] , address[20], phone[10];
	public:
	 void readdata()
	{
		std::cout<<"Enter name : ";
		std::cin>>name;
		std::cout<<"Enter address : ";
		std::cin>>address;
		std::cout<<"Enter phone number : ";
		std::cin>>phone;
	}
	public: display()
	{
	 std::cout<<"Name : "<<name;
	 std::cout<<"\nAddress : "<<address;
	 std::cout<<"\nPhone Number : "<<phone;
	 	}
};

int main()
{
	student p;
	p.readdata();
	p.display();
	return 0;

}
