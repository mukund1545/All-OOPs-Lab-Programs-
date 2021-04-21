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
};
int main()
{
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	c3=c1+c2;
	c3.show();
}
