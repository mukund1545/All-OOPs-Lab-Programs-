#include <iostream>
using namespace std;


struct volume
{
	public:
		int d, l,b,h;
void cuboidal(int x,int y,int z)
{
	l=x;
	b=y;
	h=z;
	d=x*y*z;
}	
void display()
{
	cout<<"Length: "<<l<<endl;
	cout<<"Breadth: "<<b<<endl;
	cout<<"Height: "<<h<<endl;
	cout<<"Volume: "<<d<<endl;
}	
};

int main()
{  int a,b,c;
   cout<<"Enter length, breadth and height: "<<endl;
   cin>>a;
   cin>>b;
   cin>>c;

   struct volume v;
   v.cuboidal(a,b,c);
   v.display();
   return 0;
}
   
   
   
   
   
   
