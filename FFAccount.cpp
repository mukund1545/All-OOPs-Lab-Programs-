#include<iostream>
using namespace std;
class account{
	private:
		char name[30];
		int acc_no;
		int balance;
	public:
		void getdata()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter Account number: ";
			cin>>acc_no;
			cout<<"Enter balance in your account: ";
			cin>>balance;
		}
		friend void show(account);
		

};
void show(account o)
{
	cout<<"Nmae of person is: "<<o.name<<endl;
	cout<<"Account number of person is: "<<o.acc_no<<endl;
	cout<<"Balance of person is: "<<o.balance<<endl;
	
}
int main()
{
	account A;
	A.getdata();
	show(A);
	return 0;
}
