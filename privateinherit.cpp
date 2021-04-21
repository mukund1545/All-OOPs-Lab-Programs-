#include<iostream>
using namespace std;
class parent
{
	public:
		void display()
		{
			cout<<"I am a parent"<<endl;
		}
};
class child: private parent
{   //private: display();
	public:
		void show()
		{
			cout<<"I am a child"<<endl;
			display();
		}
		
		
};
int main()
{
	child A;
//	A.display();   //behaves as private
	A.show();
}

