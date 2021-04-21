#include<iostream>
using namespace std;
class time{
	private:
		int hour,min,sec;

	public:
		void setdata()
		{
			cout<<"Enter hour: ";
			cin>>hour;
			cout<<"Enter minutes: ";
			cin>>min;
			cout<<"Enter seconds: ";
			cin>>sec;
		}
		void show()
		{
			cout<<"Time shown are: "<<endl;
			cout<<hour<<":"<<min<<":"<<sec<<endl;
		}
        void sum(time t1,time t2)
        {
	
		sec=t1.sec+t2.sec;
		min=sec/60;
		sec=sec%60;
		min=min+t1.min+t2.min;
		hour=min/60;
		min=min%60;
		hour=hour+t1.hour+t2.hour;
	    cout<<"Total time is: "<<hour<<":"<<min<<":"<<sec<<endl;
        }
};

int main()
{
	time t1,t2,t3;
	t1.setdata();
	t2.setdata();
	t1.show();
	t2.show();
	t3.sum(t1,t2);
	return 0;
}
