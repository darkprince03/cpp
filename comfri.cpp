#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,img;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		Complex operator +(Complex const &o)
		{
			Complex res;
			res.real=real+o.real;
			res.img=img+o.img;
			return res;
		}
		void print()
		{
			cout<<real<<" + "<<img<<"i"<<endl;
		}
};
int main()
{
	Complex c1(2,3),c2(4,5),c3;
	c3=c1+c2;
	c3.print();
}
