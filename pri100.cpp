#include<iostream>
using namespace std;
class Num{
	public:
		Num();
};
Num::Num(){
	static int i;
	cout<<++i<<endl;
}

int main()
{
	Num n[100];
}
