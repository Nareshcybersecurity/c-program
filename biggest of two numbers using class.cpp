#include<iostream>
using namespace std;
class biggest
{
    int x,y;
    public:
    void input();
    void display();
};
void biggest::input()
{
    cout<<"Enter x and y values: ";
    cin>>x>>y;
}
void biggest::display()
{   if(x>y)
    cout<<"Biggest of two numbers: "<<x;
    else
    cout<<"Biggest of two numbers: "<<y;
}
int main()
{
    biggest a;
    a.input();
    a.display();
    return 0;
}