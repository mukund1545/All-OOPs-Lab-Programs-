#include<iostream>
using namespace std;
int main()
{
	cout<<"Hi"<<endl;
	try
	{
		throw 20;
		cout<<"Iam in try"<<endl;
	}
	catch(int e)
	{
		cout<<"Exception no. "<<e<<endl;
	}
	cout<<"Last line"<<endl;
}
