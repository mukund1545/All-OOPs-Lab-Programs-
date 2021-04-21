#include<iostream>
using namespace std;
int main()
{
	cout<<"Enter input"<<endl;
	int i;
	cin>>i;
	try
	{
		if(i==1)
		throw 20;
		if(i==2)
		throw 10;
		if(i==3)
		throw 100;
	}
	catch(int e)
	{
		cout<<"Exception no. "<<e<<endl;
	}
	cout<<"Last line"<<endl;
}

