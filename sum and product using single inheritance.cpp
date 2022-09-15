#include<iostream>
using namespace std;
class sum
{
    int x=7,y=9;
    
    public:
    void getdata()
    {
        cout<<"Sum of the two numbers: "<<x+y<<endl;
    }
};
class product:public sum
{
    int x=7,y=9;
    public:
    void getdata1()
    {
        cout<<"product of two numbers: "<<x*y;
    }
};
int main()
{
    product p;
    p.getdata();
    p.getdata1();
}
