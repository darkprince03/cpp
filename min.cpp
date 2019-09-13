#include<iostream>
using namespace std;
int min(int, int, int);
int minter(int, int, int);
int minbit(int,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter 3 Numbers(a,b,c): ";
	cin>>a>>b>>c;
	cout<<"\nMinimum of 3 numbers is: "<<min(a,b,c)<<endl;
	cout<<"\nMinimum of 3 numbers is: "<<minter(a,b,c)<<endl;
	cout<<"\nMinimum of 3 numbers is: "<<minbit(a,b,c)<<endl;
	
}
int min(int a,int b, int c)
{
	if(a<=b && a<=c)
		return a;
	else if(b<=c && b<=a)
		return b;
	else
		return c;
}
int minter(int a,int b,int c)
{
	return (a<=b && a<=c)?a:((b<=c && b<=a)?b:c);
}
int minbit(int a,int b,int c)
{
	int m=b ^ ((a^b) & -(a<b));
	return (c ^ ((m^c) & -(m<c)));	
}
