#include<iostream>
using namespace std;
int x=1;
void a(void)
{
	int x=25;
	cout<<endl<<"Local x in a is: "<<x<<" after Entering a"<<endl;
	++x;
	cout<<endl<<"Local x in a is: "<<x<<" before exiting a"<<endl;
}
	
void b(void)
{
	static int x=50;
	cout<<endl<<"Local static x in b is: "<<x<<" after Entering b"<<endl;
	++x;
	cout<<endl<<"Local static x in b is: "<<x<<" before exiting b"<<endl;
}
void c(void)
{
	cout<<endl<<"Global x is: "<<x<<" after Entering c"<<endl;
	x*=10;
	cout<<endl<<"Global x is: "<<x<<" before exiting c"<<endl;
}
int main()
{
	int x=5;
	cout<<"Local x in main in outer scope is: "<<x<<endl;
	{
		int x=7;
		cout<<"Local x in main in inner scope is: "<<x<<endl;
	}
	cout<<"Local x in main in outer scope is: "<<x<<endl;
	a();
	b();
	c();
	a();
	b();
	c();
}
