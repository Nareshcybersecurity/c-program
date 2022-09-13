#include<iostream>
using namespace std;
class add

{
    int x,y;
    public:
    void input();
    void display();
};
void add::input()
{
cout<<"Enter n and y values: ";
cin>>x>>y; 
}
void add::display()
{
    cout<<"addition of 2 numbers: "<<x+y;}
int main()
{
    add a;
    a.input(),' ';
    a.display();
}