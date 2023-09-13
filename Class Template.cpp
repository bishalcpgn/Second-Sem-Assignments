//Add two numbers of different data type using class template.
#include<iostream>
template<class T1, class T2>
float add(T1 a , T2 b)
{
    return a+b;
}
int main()
{
    std::cout<<"Addition of 2 and 3.5 : "<<add(2,3.5);
     return 0;

}