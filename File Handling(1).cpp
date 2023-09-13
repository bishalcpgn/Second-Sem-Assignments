/*WAP to input name and address of a student and store information in a file name student.dat.*/
//Using open()
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    char name[10],address[20];
    fstream f ;
    f.open("student.dat");
    cin>>name>>address;
    f<<name<<address;
    f.close();
    return 0;
}
