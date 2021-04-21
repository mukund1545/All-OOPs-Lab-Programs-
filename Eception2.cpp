#include<iostream>
using namespace std;
void fun();
int main()
{
	cout<<"Hi"<<endl;
	try
	{
	    fun();
		cout<<"Iam in try"<<endl;
	}
	catch(int e)
	{
		cout<<"Exception no. "<<e<<endl;
	}
	cout<<"Last line"<<endl;
}
void fun()
{
	throw 20;
}
