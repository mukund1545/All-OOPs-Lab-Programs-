#include<iostream>
using namespace std;
class box{
	private:
		int l,b,h;
	public:
		void setdata(int x,int y,int z)
		{
			l=x;
			b=y;
			h=z;
		}
		void show()
		{
			cout<<"Length: "<<l<<endl;
			cout<<"Breadth: "<<b<<endl;
			cout<<"Height: "<<h<<endl;

		}
		void getvolume()
		{
			cout<<"volume is: "<<l*b*h<<endl;
		}
		
};
int main()
{
	box *p,A,B;    
	p=&A;    //this is an object pointer that store the address of the object
	p->setdata(10,12,13) ;            //Call through object pointer
	p->show();      
    p->getvolume();
	B.setdata(5,40,30);  //direct call
	B.show();      
	B.getvolume();      
	return 0;
}
