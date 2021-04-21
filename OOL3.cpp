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
		complex operator +(complex c)      // By using operator keyword we can define the + and use it to add the objects of class complex
		{
			complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	cout<<"Initial values of a and b of c1"<<endl;
	c1.show();
	c2.setdata(5,6);
	cout<<"Initial values of a and b of c2"<<endl;
	c2.show();
	c3=c1+c2;                              //BINARY OPERATOR OVERLOADING
    cout<<"Values of a nad b after addition"<<endl;
	c3.show();
}
