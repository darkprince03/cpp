#include<iostream>
using namespace std;
static int i;
class Num{
	public:
		Num();
		~Num();
};
Num::Num(){
	
	cout<<++i<<endl;
}
Num::~Num(){
	cout<<i*i<<endl;
	i--;
}
int main()
{
	Num n[10];
	cout<<"Squares in Reverse:"<<endl;
}
