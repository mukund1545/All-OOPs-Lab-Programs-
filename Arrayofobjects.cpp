#include<iostream>
using namespace std;
class employee{
	private:
		int id;
		char name[30];
	public:
		void setdata()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter id: ";
			cin>>id;
		}
		void show()
		{
			cout<<"NAME: "<<name<<endl;
			cout<<"ID: "<<id<<endl;
		}
};
int main()
{
	int n,i;
	cout<<"Enter no of employee: ";
	cin>>n;
	employee A[n];
	for(i=0;i<n;i++)
	{
		A[i].setdata();
	}
	for(i=0;i<n;i++)
	{
		A[i].show();
	}
}

