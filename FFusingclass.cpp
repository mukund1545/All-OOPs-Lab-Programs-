#include<iostream>
using namespace std;
class car2;
class car1{
    	private:
			float p1,d1;
		public:
		void setdata()
		{
		
			cout<<"Enter petrol for 1: ";
			cin>>p1;
			cout<<"Enter distance for 1: ";
			cin>>d1;
		}
		
		friend void sum(car1,car2);
};
class car2{
	private:
		float p2,d2;
	public:
		 void setdata()
		 {
		
			cout<<"Enter petrol for 2: ";
			cin>>p2;
			cout<<"Enter distance for 2: ";
			cin>>d2;
	}
		friend void sum(car1,car2);
};
void sum(car1 A,car2 B)
{
	cout<<"Petrol in car 1 is: "<<A.p1<<" L"<<endl;
	cout<<"Distance in car 1 is: "<<A.d1<<" km"<<endl;
	cout<<"Petrol in car 2 is: "<<B.p2<<" L"<<endl;
	cout<<"Distance in car 2 is: "<<B.d2<<" km"<<endl;
	cout<<"Sum of petrol in car 1 and car 2 is: "<<(A.p1+B.p2)<<" L"<<endl;
	cout<<"Sum of distance in car 1 and car 2 is: "<<(A.d1+B.d2)<<" km"<<endl;
	
}
int main()
{
	car1 auddi;
	car2 bmw;
	auddi.setdata();
	bmw.setdata();
	sum(auddi,bmw);
	return 0;
}
