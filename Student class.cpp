#include<iostream>
using namespace std;
class student
{
    int no;
    std::string name;
    public:
    student();
    student(int,string);
    void display();
};

student::student()
{
    no=0;
    name="unknown";
}
student::student(int x,std::string y)
{ no=x;
  name=y;}
  void student::display()
  {
      cout<<"Reg: "<<no<<endl;
      cout<<"Name: "<<name<<endl;
  }
  int main()
  {
      student s();
      student s1(123,"Abinesh");
      s1.display();
  }
