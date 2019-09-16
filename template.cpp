#include<iostream>
using namespace std;
template <typename T>
T myMax(T x,T y)
{
	return (x>y)?x:y;
}
int main()
{
	cout<<myMax<int>(5,8)<<endl;
	cout<<myMax<double>(5.8,3.78)<<endl;
	cout<<myMax<char>('a','g')<<endl;

	return 0;
}
