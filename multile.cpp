#include<iostream>
using namespace std;
class A
{
	public:
		int a;
	public:
		A()
		{
			cout<<"This is a class A"<<endl;
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"This is a class B"<<endl;
		}
		void setid(int i)
		{
			a=i;
		}
		int print()
		{
			return a;
		}
};
class C:public B
{	
	public:
		C()
		{
			cout<<"This is a class C"<<endl;
		}
	
};
void f()
{
	char *p;
	*p=0;
}
int main()
{
	int c='a',c++;
	B b;
	b.setid(3);
	cout<<b.print()<<endl;	
}
