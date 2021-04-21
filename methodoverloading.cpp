#include<iostream>
# define pi 3.14
using namespace std;
class fun
{
	public:
		void area(int);              //Area of circle
		void area(int,int);            //Area of rectangle
		void area(float,int,int);        //Area of triangle
};
void fun::area(int a)
{
	cout<<"Area of circle: "<<pi*a*a<<endl;
}
void fun::area(int a,int b)
{
	cout<<"Area of rectangle: "<<a*b<<endl;	
}
void fun::area(float x, int a, int b)
{
	cout<<"Area of triangle: "<<x*a*b<<endl;	
}
int main()
{
	int n,a,b;
	fun obj;
	cout<<"----------------METHOD OVERLOADING---------------"<<endl;
	cout<<"1.Area of circle"<<endl;
	cout<<"2.Area of rectangle"<<endl;
	cout<<"3.Area of triangle"<<endl;
	cout<<"4.Exit"<<endl;
	while(1)
	{
	cout<<"Enter your choice: ";
	cin>>n;
	switch(n)
	{
		case 1:
			cout<<"Enter radius of circle: ";
			cin>>a;
			obj.area(a);
			break;
		case 2:
			cout<<"Enter length and breadth of rectangle: ";
			cin>>a;cin>>b;
			obj.area(a,b);
			break;		
		case 3:
			cout<<"Enter height and base of triangle: ";
			cin>>a;cin>>b;
			obj.area(0.5,a,b);
			break;
		case 4:
		     exit(0);
		default:
			cout<<"Wrong choice"<<endl;
			break;
	}
 }
}
