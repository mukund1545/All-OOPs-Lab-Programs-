#include<iostream>
using namespace std;
class phone{
	public:
		virtual void Battery()
		{
			cout<<"Battery is of 2000mAh."<<endl;
		}
};
class smartphone:public phone
{
	public:
		void Battery()                               //method overrriding
		{
			cout<<"Battery is of 5000mAh. "<<endl;
		}
};
int main()
{
	smartphone A;
	phone *p;
//	A.Battery();                        
	p=&A;                             
	p->Battery();                       //Dynamic binding
	return 0;
}

