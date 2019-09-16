#include<iostream>
#include<string>
using namespace std;
class Str
{
	private:
		string s;
	public:
		Str(string s1)
		{
			s=s1;
		}
		Str()
		{
			s="";
		}
		Str operator +(Str const &o)
		{
			Str res;
			res.s=s+" "+o.s;
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
