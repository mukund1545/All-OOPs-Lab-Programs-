#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter input"<<endl;
	int i;
	cin>>i;
	try
	{
		char xyz;
		if(i==1)
		throw 20.22;
		if(i==2)
		throw 10;
		if(i==3)
		throw xyz;
	}
	catch(...)
	{
		cout<<"Any Exception is there!! "<<endl;
	}
	cout<<"Last line"<<endl;
}

