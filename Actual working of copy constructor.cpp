/*To show actual use of copy constructor.

If programmmer doensn't define any copy constructor , the compiler supplies its owmn copy constructor.
So if you comment out line 16-19 , still the program works fine.*/

#include <iostream>
class demo
 {
 
    public:
    	demo()
    	{
    		
		}
   
   demo(demo &t)
    {
        std::cout << "Copy constructor called.\n" ;
    }

    
};

int main()
{
    demo d1;
    demo d2=d1;//copy constructor called for first time
    demo d3(d1);//copy constructor called for second time
    return 0;
}
