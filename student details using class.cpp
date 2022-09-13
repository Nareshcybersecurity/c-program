#include<iostream>
using namespace std;
class student
{   string name;
    int Reg,M1,M2,M3,Total,Average;
    public:
    void input();
    void calculate();
    void display();
};
void student::input()
{
    cout<<"Enter name: "<<endl; 
    cin>>name;
    cout<<"Enter Reg.no: "<<endl;
    cin>>Reg;
    cout<<"Enter Mark1: "<<endl;
    cin>>M1;
    cout<<"Enter Mark2: "<<endl;
    cin>>M2;
    cout<<"Enter Mark3: "<<endl;
    cin>>M3;
}
void student::calculate()
{
    Total=M1+M2+M3;
    Average=Total/3;
}
void student::display()
{ 
    cout<<"Student name: "<<name<<endl;
    cout<<"Student Reg.no: "<<Reg<<endl;
    cout<<"Mark 1: "<<M1<<endl;
    cout<<"Mark 2: "<<M2<<endl;
    cout<<"Mark 3: "<<M3<<endl;
    cout<<"Total Marks: "<<Total<<endl;
    cout<<"Average Marks: "<<Average<<endl;
}
int main()
{
    student a;
    a.input();
    a.calculate();
    a.display();
    return 0;
}