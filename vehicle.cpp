#include<iostream>
using namespace std;
class Vehicle
{
	public:
		Vehicle()
		{
			cout<<"This is a vehicle"<<endl;
		}
};
class Fourwheeler
{
	public:
		Fourwheeler()
		{
			cout<<"This is a fourwheeler"<<endl;
		}
};
class Car:public Vehicle,public Fourwheeler
{
	
};
int main()
{
	Car c1;
}
