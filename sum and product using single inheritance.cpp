#include<iostream>
using namespace std;
class sum
{
    public:
    int x=77,y=99;
    void getdata()
    {
        cout<<"Sum of the two numbers: "<<x+y<<endl;
    }
};
class product:public sum
{
    
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
