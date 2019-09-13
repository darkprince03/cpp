#include<iostream>
#include<iomanip>
using namespace std;
#include<cstdlib>

int main()
{
	for(int i=1;i<=20;i++)
	{
		cout<<setw(10)<<(1+rand()%6);
		if(i%5==0)
		cout<<endl;
	}
	unsigned seed;
	cout<<"\nEnter Seed: ";
	cin>>seed;
	srand(seed);

	for(int i=1;i<=20;i++)
	{
		cout<<setw(10)<<(1+rand()%6);
		if(i%5==0)
		cout<<endl;
	}
	return 0;
}
