#include<iostream>
using namespace std;
class watch{
	public:
		void time()
		{
			cout<<"watch shows time"<<endl;
		}
};
class smartwatch:public watch
{
	public:
		void time()                    //method overriding: same name function with same arguments exist in both parent and child class
		{
			cout<<"Smart watch shows time as well as walking steps "<<endl;
		}
};
int main()
{
	smartwatch obj;               
	obj.time();              //early binding
	return 0;
}
