#include<iostream>
using namespace std;
class mean{
	private:
	    int num1;
     	int num2;
    public:
    	mean()
		{
    		num1=0;
    		num2=0;
		}
		void setdata(int a,int b)
		{
			num1=a;
			num2=b;
		}
		void show()
		{
			cout<<"Number 1 is: "<<num1<<endl;
			cout<<"Number 2 is: "<<num2<<endl;
		}
		friend void Mean(mean);
};
void Mean(mean n)
{
      cout<<"Mean of Two numbers are: "<<endl;
	  cout<<(n.num1+n.num2)/2;	
	
}
int main()
{
	mean A;
	A.setdata(10,20);
	A.show();
	Mean(A);
	return 0;
}
