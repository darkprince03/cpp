#include<iostream>
using namespace std;
int max(int, int, int);
int maxter(int, int, int);
int maxbit(int,int,int);
int main()
{
	int a,b,c;
	cout<<"Enter 3 Numbers(a,b,c): ";
	cin>>a>>b>>c;
	cout<<"\nMaximum of 3 numbers is: "<<max(a,b,c)<<endl;
	cout<<"\nMaximum of 3 numbers is: "<<maxter(a,b,c)<<endl;
	cout<<"\nMaximum of 3 numbers is: "<<maxbit(a,b,c)<<endl;
	
}
int max(int a,int b, int c)
{
	if(a>=b && a>=c)
		return a;
	else if(b>=c && b>=a)
		return b;
	else
		return c;
}
int maxter(int a,int b,int c)
{
	return (a>=b && a>=c)?a:((b>=c && b>=a)?b:c);
}
int maxbit(int a,int b,int c)
{
	int m=a ^ ((a^b) & -(a<b));
	return (m ^ ((m^c) & -(m<c)));	
}
