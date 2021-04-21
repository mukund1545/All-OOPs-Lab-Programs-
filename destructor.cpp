#include<iostream>
using namespace std;
class car                 //class anme is car//
{
	private:                       //access specifiers//
	float petrol, distance;     //instance variable//
	public:
	car()      //default constructor//
	{
		petrol=70;
		distance=0;
	}
	void show();
   ~car()
   {
   	cout<<"Destructor call!!"<<endl;
   }

};
void car::show()
{
	cout<<"The value of petrol in car is "<<petrol<<" L"<<endl;
	cout<<"Distance travel by car is "<<distance<<" Km"<<endl;
}
int main()
{
	car hondacity,civic;
	hondacity.show();
	civic.show();
	return 0;
}


