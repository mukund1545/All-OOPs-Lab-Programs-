#include<iostream>
using namespace std;
int main()
{
	cout<<"Hi"<<endl;
	try
	{
	    throw 20.2;
		cout<<"Iam in try"<<endl;
	}
	catch(double e)
	{
		cout<<"Exception no. "<<e<<endl;
	}
	catch(int e)
    {
		cout<<"Exception no. "<<e<<endl;
	}
	catch(float e)
	{
		cout<<"Exception no. "<<e<<endl;
	}
	cout<<"Last line"<<endl;
}

