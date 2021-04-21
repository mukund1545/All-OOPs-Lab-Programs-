#include<iostream>
using namespace std;
class complex
{
	private:
		int a,b;
	public:
		void setdata(int x, int y)
		{
			a=x;
			b=y;
		}
		void show()
		{
			cout<<"a= "<<a<<endl;
			cout<<"b= "<<b<<endl;	
		}
		complex operator -()      // By using operator keyword we can define the - and use it to add the objects of class complex
		{
			complex temp;
			temp.a=-a;
			temp.b=-b;
			return temp;
		}
};

int main()
{
	complex c1,c2;
	c1.setdata(3,4);
	cout<<"Before using unary operator"<<endl;
	c1.show();
	c2=-c1; 
	cout<<"After using unary operator"<<endl;                             //UNARY OPERATOR OVERLOADING
	c2.show();
}
