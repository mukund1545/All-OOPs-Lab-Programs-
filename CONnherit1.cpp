#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			a=3;
	        cout<<"a: "<<a<<endl;
		}
		A(int k)
		{
			a=k;
			cout<<"a: "<<a<<endl;
		}
};
class B: public A
{
	private:
		int b;
	public:
		B(int l,int j)          //in parameterized constructor we have to call the constructor and need to pass the arguments in child class function
		{
			b=j;
			cout<<"b: "<<b<<endl;
		}
};
int main()
{
	B obj(9,10);
	return 0;
}
