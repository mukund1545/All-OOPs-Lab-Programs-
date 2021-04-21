#include<iostream>
using namespace std;
class car{
	public:
		virtual void acon()
		{
			cout<<"AC of car class"<<endl;
		}
};
class sportscar:public car
{
	public:
		void acon()                               //method overrriding
		{
			cout<<"AC of sports car"<<endl;
		}
};
int main()
{
	sportscar A;
	car *p;
//	A.acon();                        //early binding
	p=&A;                             //Base class pointer storing the address of child class object (Base class pointer to child class object)
	p->acon();                       //early binding only checks the type of object or pointer class
	                                 // virtual keyword is applied then the object of base class hence it will check the content of object call
	return 0;
}
// for dynamic binding we use virtual functions
