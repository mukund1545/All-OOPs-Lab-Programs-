#include<iostream>
using namespace std;
class home{
	private:
		int choco;
		int pastries;
		int jelly;
	public:
		home()           //default constructor
		{
			choco=0;
			pastries=0;
			jelly=0;
		}
		void setvalues(int c,int p,int j)           //member function of a class
		{
			choco=c;
			pastries=p;
			jelly=j;
        }
		void show()           //member function of a class
		{
		     cout<<"Fridge quantities write now: "<<endl;
		     cout<<"Chocolates: "<<choco<<endl;
		     cout<<"Pastries: "<<pastries<<endl;
		     cout<<"Jellies: "<<jelly<<endl;
		}
		friend void eating(home);            //eating function is now friend of class home i.e declaration
		
};
void eating(home o)                       //this function is not member function of class i.e defination
{
      cout<<"B has came to eat chocolates, pastries and jellies:"<<endl;
	  cout<<"B eat:"<<endl;
	  cout<<"Chocolates: "<<o.choco<<endl;
	  cout<<"Pastries: "<<o.pastries<<endl;
	  cout<<"Jellies: "<<o.jelly<<endl;

}
int main()
{
	home A;       //creation of object
	A.setvalues(5,10,20);
//	A.show();
	eating(A);
	return 0;
}
