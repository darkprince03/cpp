#include<iostream>
using namespace std;
class Point
{
	private:
		 int x,y;
	public:
		Point(int x1,int y1)
		{
			x=x1;
			y=y1;
		}
		Point(const Point &p2)
		{
			x=p2.x+1;
			y=p2.y;
		}
		Point()
		{
			x=0;
			y=0;
		}
		int getX()
		{
			return x;
		}
		int getY()
		{
			return y;
		}
};
int main()
{
	Point p(3,4);
	Point p1=p;
	cout<<"X : "<<p.getX()<<" Y: "<<p.getY()<<endl;
	cout<<"X : "<<p1.getX()<<" Y: "<<p1.getY()<<endl;
}
