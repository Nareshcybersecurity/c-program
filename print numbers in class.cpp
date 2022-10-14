#include<iostream>
using namespace std;
class printnumbers
{
	int a;
	char b;
	float c;
	double d;
	long e;
	bool f;
	public:
		int printn(int);
		char printn(char);
		float printn(float);
		double printn(double);
		long printn(long);
		bool printn(bool);
		
};
int printnumbers::printn(int x) 
{
	a=x;
	return x;
}
	char printnumbers::printn(char y)
	{
		b=y;
	    return y;
}
	float printnumbers::printn(float z)
{
	c=z;
    return c;

}

	double printnumbers::printn(double k)
{
	d=k;
	return k; 
}
	long printnumbers::printn(long q)
{
	e=q;
	return q;
}
	bool printnumbers::printn(bool p)
{
	f=p;
     return p; 
	}
main()
{
	printnumbers l;
     cout<<"\n integer is"<<l.printn(2);
	 cout<<"\ncharacter is"<<l.printn('j');
	 cout<<"\n decimal point"<<l.printn(89.0);
	 cout<<"\n double value"<<l.printn(45.8);
	  cout<<"\n long integer"<<l.printn(123245);
	  cout<<"\n boolean num"<<l.printn("true");
	 return 0;
}

