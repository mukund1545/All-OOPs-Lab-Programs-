#include<iostream>
using namespace std;
class seprate{
	private:
		float p;
		int q;
		float r;
	public:
		seprate(float P)
		{
			p=P;
		}
	void s()
	{
		q=p ;
		r= p-q;
	}
	void show();
};
void seprate::show()
{
		
		cout<<"Float number is: "<<p<<endl;
		cout<<"Integer part is: "<<q<<endl;
		cout<<"Decimal part is: "<<r<<endl;
	

}
int main()
{
	seprate A(95.2);
	A.s();
	A.show();
}
