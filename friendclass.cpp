#include<iostream>
using namespace std;
class X{
	private:
		int n=10;
	/*	void set()
		{
			cout<<"Enter n"<<endl;
			cin>>n;
		}
*/		friend class Y;
};
class Y
{
	public:
		void show(X obj)
		{
			cout<<"Value of n: "<<obj.n<<endl;
		}
};
int main()
{
	X object;
	Y a;
	a.show(object);
	return 0;
}

