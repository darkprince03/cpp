#include<iostream>
using namespace std;
class Base
{
	protected:
		int x;
	public:
		Base(int i)
		{
			x=i;
		}
		virtual void fun()=0;
		int getX()
		{ 
			return x;
		}
};
class Derived:public Base
{
	int y;
	public:
		Derived(int i,int j):Base(i)
		{
			y=j;
		}
		void fun()
		{
			cout<<"x="<<x<<" y="<<y<<endl;
		}
};
/*class Derived1:public Base
{
	int z;
	public:
		void fun()
		{
			cout<<"fun() called";
		}
};*/
int main()
{
	//Base *p=new Derived1(); //instatiation of object of derived class is allowed thru  base class ptr
	//Derived d;
	//d.fun();
	//Base *p1=new Derived();
	//p->fun();
	//p1->fun1();
	Derived d(3,7);
	d.fun();
	return 0;
}
