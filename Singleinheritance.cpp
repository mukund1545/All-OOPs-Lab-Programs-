#include<iostream>
using namespace std;
class car                                      //Base class
{
    protected:                           //Access sepecifier which allow the derived class to access the variables that are already available
	    int colorno;
		char fueltype[30];                          //Instance variables
	public:                                               //Access specifiers
	    void input()                                      //Member function
		  {
			cout<<"Enter your car color: "<<endl;
			cout<<"1. Golden"<<endl;
			cout<<"2. Silver"<<endl;
			cout<<"3. Black"<<endl;
			cin>>colorno;
			cout<<"Enter fuel type of car: ";
			cin>>fueltype;
		  }  
		void show()                                         // Member function
		{
			if(colorno==1)
			cout<<"Your car color is: Golden"<<endl;
			if(colorno==2)
			cout<<"Your car color is: Silver"<<endl;
			if(colorno==3)
			cout<<"Your car color is: Black"<<endl;
			else
			cout<<"Your car color is: White"<<endl;
			cout<<"Your car fuel type is: "<<fueltype<<endl;
		}
};
class sportscar: public car                                  //Derived class
{
    private:                                               //Access sepecifiers
	    int maxspeed;
		int alarm;                                        // Instance variables
		int airbag;
	public:
	    void setdata()                                    //Member function
		  {
			cout<<"Enter your car maximum speed ";
		
			cin>>maxspeed;
			cout<<"Enter number of alarms in your car ";
			cin>>alarm;
			cout<<"Enter number of airbags in your car: ";
			cin>>airbag;
		  }  
		void display()
		{
	
			cout<<"Your car maximum speed is: "<<maxspeed<<endl;
			cout<<"Your car has "<<alarm<<" alarms"<<endl;
			cout<<"Your car has "<<airbag<<" airbags"<<endl;
			if(colorno==1)
			cout<<"Your car color is: Golden"<<endl;
			if(colorno==2)
			cout<<"Your car color is: Silver"<<endl;
			if(colorno==3)
			cout<<"Your car color is: Black"<<endl;
			cout<<"Fueltype: "<<fueltype<<endl;
		}
	
};
int main()
{
	car Auddi;
	sportscar lambourginni;
//  variation 1
//	Auddi.input();
//	Auddi.show();
//  variation 2
 /*   lambourginni.input();
    lambourginni.show();
	lambourginni.setdata();
	lambourginni.display();
	*/
// variation 3
   lambourginni.input();
	lambourginni.setdata();
	lambourginni.display();
	
	return 0;
}
