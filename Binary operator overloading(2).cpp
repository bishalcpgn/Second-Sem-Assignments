/*Create a class student which contains marks in three subjects as data member.Use input and output
functions yourself.Now, overload + and - operator to find individual sum and differences of marks
of two instances.*/
#include<iostream>
using namespace std;
class student
{
  float eng,maths,nep;
  public:void input()
   {
      cout<<"\nNepali = ";
      cin>>nep;
      cout<<"English = ";
      cin>>eng;
      cout<<"Maths = ";
      cin>>maths;
   }
student operator +(student a)
{
    student b;
    b.eng=a.eng+eng;
    b.maths=a.maths+maths;
    b.nep=a.nep+nep;
    return b;
}
student operator -(student a)
{
    student b;
    if (a.eng>eng) b.eng=a.eng-eng;
    else b.eng=eng-a.eng;

    if(a.maths>maths) b.maths=a.maths-maths;
    else b.maths=maths-a.maths;

    if(a.nep>nep) b.nep=a.nep-nep;
    else  b.nep=nep-a.nep;

    return b;
}
void display()
{
    cout<<"\nNepali = "<<nep;
    cout<<"\nEnglish = "<<eng;
    cout<<"\nMaths = "<<maths;

}
}s1,s2,s3,s4;
int main()
{
    cout<<"\nEnter marks for student 1";
    s1.input();
    cout<<"\n\nEnter marks for student 2";
    s2.input();
    system("clear");//system("clear") for g++/gcc compiler in linux.system("cls") in turbo c family. 
    cout<<"\nMarks of student 1";
    s1.display();
    cout<<"\n\nMarks of student 2";
    s2.display();
    cout<<"\n\nSum of marks";
    s3=s1.operator+(s2);//s3=s1+S2;
    s3.display();
    cout<<"\n\nDifferene of marks";
    s4=s1.operator-(s2);//s4=s1-S2;
    s4.display();
    return 0;
}
    

