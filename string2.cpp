#include<iostream>
#include<string>
#include<string.h>
using namespace std;
class Str
{
	private:
		char s[100];
	public:
		Str(char s[])
		{
			strcpy(this->s,s);
		}
		Str(){}
		Str operator +(Str const &o)
		{
			Str res;
			strcat(this->s,o.s);
			strcat(res.s,this->s);
			return res;
		}
		void print()
		{
			cout<<s<<endl;
		}
};
int main()
{
	Str c1("Ranjit"),c2("Pillai"),c3;
	c3=c1+c2;
	c3.print();
}
