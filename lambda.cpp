#include<iostream>
#include<string>
using namespace std;
int main()
{
	auto sum=[](auto a,auto b)
	{
		return a+b;
	};
	cout<<sum(1,6)<<endl;
	cout<<sum(7.5,8.3)<<endl;
	cout<<sum(string("Ranjit"),string(" Pillai"))<<endl;
	return 0;
}
//g++ -std=c++17 lambda.cpp
