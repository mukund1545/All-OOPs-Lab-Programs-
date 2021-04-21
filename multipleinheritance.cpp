#include<iostream>
#include<math.h>
using namespace std;
class A
{
	protected:
		int a,b,c;
	public:
		void getdata()
		{
			cout<<"Enter values of a and b: ";
			cin>>a;
			cin>>b;
		}
		void cal()
		{
			c=a+b;
			cout<<"Sum is: "<<c<<endl;
		}
};
class B
{
    protected:
	   int m;
	public:
	   void cal2()
	   {
	   	       cout<<"Enter value of m: ";
	   	       cin>>m;
	   	       cout<<"Square of number is: "<<m*m<<endl;
	   }	
};
class C: public A, public B
{
	public:
		void cal3()
		{
		    	c=pow(a,3)+pow(b,3);
		    	cout<<"Sum of cubes: "<<c<<endl;
		}
};
int main()
{
	C f;
	f.getdata();
	f.cal();
	f.cal2();
	f.cal3();
	return 0;
}
