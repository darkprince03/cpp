#include<iostream>
using namespace std;
#define PI 3.14
class Shape
{
	private:
		 int x,y;
		double r;
	public:
		Shape(int x1,int y1);
		Shape(int x1);
		Shape();
		Shape(double r1);
		double area();
};
Shape::Shape(int x1,int y1)
{
			x=x1;
			y=y1;
			r=0;
}
Shape::Shape(int x1)
		{
			x=x1;
			y=0;
			r=0;
		}
Shape::Shape(double r1)
		{
			r=r1;
			x=0;
			y=0;
		}
Shape::Shape()
		{
			r=1;
			x=0;
			y=0;
		}
double Shape::area(){
	if(x==0 && y==0)
	{
		return (double)(r*r*PI);
	}
	else if(y==0)
	{
		return (double)x*x;
	}
	else{
		return (double)x*y;
	}
}	
int main()
{
	Shape p;
	Shape p1(3.0);
	Shape p2(3);
	Shape p3(3,4);
	cout<<"Area p: "<<p.area()<<" Area p1: "<<p1.area()<<endl;
	cout<<"Area p2: "<<p2.area()<<" Area p3: "<<p3.area()<<endl;
}
