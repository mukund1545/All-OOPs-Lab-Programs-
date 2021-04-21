#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A(int k)
		{
			a=k;
			cout<<"A equals to: "<<a<<endl;
		}
		~A()
		{
			cout<<"Parent class destructor"<<endl;
		}
};
class B: public A
{
	private:
		int b;
	public:
		B(int x,int y):A(x)
		{
			b=y;
			cout<<"B equals to: "<<b<<endl;
		}
		~B()
		{
			cout<<"Child class destructor"<<endl;
		}
		
};
int main()
{
	B qbj(3,4);
	return 0;
}

