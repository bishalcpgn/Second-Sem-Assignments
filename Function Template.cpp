//Add two numbers of same data type using function template.
#include<iostream>
template<class T> 
T add(T a , T b)
{
    return a+b;
}
int main()
{
    std::cout<<"For integer data type : "<<add(2,3);
     std::cout<<"\nFor floating data type : "<<add(2.3,3.2);
     return 0;

}
