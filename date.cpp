#include<iostream>
using namespace std;
class Date
{
	private:
		int month;
		int day;
		int year;
	public:
		Date(int=1,int=1,int=1990);
		void print();
};
Date::Date(int d,int m,int y)
{
	day=d;
	month=m;
	year=y;
}
void Date::print()
{
	cout<<"dd/mm/yy : "<<day<<"/"<<month<<"/"<<year<<endl;
}
int main()
{
	Date d1(23,11,2019),d2;
	d1.print();
	d2.print();
	d2=d1;
	d2.print();
}
