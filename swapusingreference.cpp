#include<iostream>
using namespace std;

void swap_v(int,int);
void swap_a(int*,int*);
void swap_r(int&,int&);

int main()
{
	int a=10,b=20;
	cout<<"Value of a and b before swapping by value->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;
	swap_v(a,b);
	cout<<"Value of a and b after swapping by value->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;	
	a=10,b=20;
    cout<<"Value of a and b before swapping by address->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;
	swap_a(&a,&b);
	cout<<"Value of a and b after swapping by address->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;
	a=10,b=20;	
	cout<<"Value of a and b before swapping by reference->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;
	swap_r(a,b);
	cout<<"Value of a and b after swapping by reference->"<<endl;
	cout<<"a-> "<<a<<endl<<"b-> "<<b<<endl;	
	return 0;
}

void swap_v(int x,int y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}

void swap_a(int *x,int *y)
{
	int temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
void swap_r(int &x,int &y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
