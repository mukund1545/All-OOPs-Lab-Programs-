#include<iostream>
using namespace std;
class car                 //class anme is car//
{
	private:                       //access specifiers//
	float petrol, distance;     //instance variable//
	public:
	car() ;       //default constructor//
/*	{
		petrol=70;
		distance=0;
	}
*/	
    void show();
    car(float p)      //single paramiterized constructor//
    {
    	petrol=p;
    	distance=0;
	}
    car(float p, float d)      //multiple paramiterized constructor//
    {
    	petrol=p;
    	distance=d;
	}
	car(car &t)                       //copy constructor//
	{
		petrol=t.petrol;
		distance=t.distance;
	}
	
		
};
car::car()          //defining constructor outside the class//
{
	petrol=70;
	distance=0;
	
}
void car::show()
{
	cout<<"The value of petrol in car is "<<petrol<<" L"<<endl;
	cout<<"Distance travel by car is "<<distance<<" Km"<<endl;
}
int main()
{
	car hondacity(78,0), civic(59,6),audi,bmw(civic);
	hondacity.show();
	civic.show();
	audi.show();
	bmw.show();
	return 0;
	
}
