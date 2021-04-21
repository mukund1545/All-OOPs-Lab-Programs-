#include<iostream>
using namespace std;
class box{
	protected:
		int red,blue;
	public:
		void get1()
		{
			cout<<"Enter red balls: ";
			cin>>red;
			cout<<"Enter blue balls: ";
			cin>>blue;
		}
};
class bigbox:private box
{
	private:
		int size,white;
	public:
		void get2()
		{
			cout<<"Enter size of box: ";
			cin>>size;
			cout<<"Enter white balls: ";
			cin>>white;
			get1();
			cout<<endl;
		}
		void show()
		{
			cout<<"Size of box is: "<<size<<endl;
			cout<<"Red balls: "<<red<<endl;
			cout<<"Blue balls: "<<blue<<endl;
			cout<<"White balls: "<<white<<endl<<endl;
			cout<<"Total balls are: "<<red+white+blue<<endl;
		}
};
int main()
{
	bigbox B1;
//	B1.get1();
	B1.get2();
	B1.show();
	return 0;
}
