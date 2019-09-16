#include<iostream>
using namespace std;
template <typename T>
class Array
{
	private:
		T *ptr;
		int size;
	public:
		Array(T arr[],int s);
		void print();
};
template <typename T>
Array<T>::Array(T arr[],int s)
{
	ptr=new T[s];
	size =s;
	for(int i=0;i<size;i++)
		ptr[i]=arr[i];
}
template <typename T>
void Array<T>::print()
{
	for(int i=0;i<size;i++)
		cout<<" "<<*(ptr+i);
	cout<<endl;
}
int main()
{
	int arr[]={1,2,3,4,5};
	Array<int> a(arr,5);
	a.print();
	double d[]={9.8,6.5,3.5};
	Array<double> b(d,3);
	b.print();
	char c[]={'a','b','c','d'};
	Array<char> ce(c,4);
	ce.print();
	
	return 0;
}
