#include <iostream>
using namespace std;
struct complex
{
	private:
		int r,i;     //encapsulate//
	public:
		void setdata(int x,int y)
		{
			r=x;
			i=y;
		}
		void showdata();
		
};
void complex::showdata() 
		{
			cout<<r<<"+"<<i<<"i";
		}

int main()
{
	struct complex c1;
	c1.setdata(6,7);
	c1.showdata();
	return 0;
}

