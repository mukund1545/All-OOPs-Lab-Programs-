#include<iostream>
using namespace std;
class box{
	private:
		int l,b,h;
	public:
		void setdata(int l,int b,int h)  //x,y,z are local variables / formal parameters
		{
			this->l=l;             //l,b,h are instance variables
			this->b=b;
			this->h=h;
		}
		void show()
		{
			cout<<"Length: "<<l<<endl;
			cout<<"Breadth: "<<b<<endl;
			cout<<"Height: "<<h<<endl;

		}
		void getvolume()
		{
			cout<<"volume is: "<<l*b*h<<endl;
		}
};
int main()
{
	box A;
	A.setdata(10,20,30);  //direct call
	A.show(); 
	A.getvolume();           
	return 0;
}
