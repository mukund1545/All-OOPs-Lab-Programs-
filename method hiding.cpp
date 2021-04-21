#include<iostream>
using namespace std;
class Parent{
	public:
		void fun()
		{
			cout<<"I am parent"<<endl;
		}
};
class child:public Parent
{
	public:
		void fun(int a)                    //method hiding:trying to implement method overloading in inheritance
		{
		
			cout<<"A: "<<a<<endl;
		}
	void fun()
		{
				cout<<"I am child"<<endl;
		}

};
int main()
{
	child obj;
	obj.fun();            
	obj.fun(10);                           //early binding
	return 0;
}
