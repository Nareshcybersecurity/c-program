#include<iostream>
using namespace std;
int main()
{
   int age,remain;
std::cout<<"Enter the age: ";
std::cin>>age;
    if (age>=18){
    cout<<"Eligible for voting";}
    else {
    cout<<"Not Eligible for voting<<endl;
    remain=18-age;
    cout<<"Remaining years "<<remain;
}
}