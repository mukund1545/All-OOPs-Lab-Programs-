#include<iostream>
using namespace std;
class phone
{
	protected:
		int space;
		int ram;
	public:
		void set1()
		{
			cout<<"Enter space : ";
			cin>>space;
			cout<<"Enter RAM in gb : ";
			cin>>ram;
		}
		
};
class smartphone: public phone
{
    private:
      	int camara;
      	float weight;
    public:
    	void set2()
    	{
    		cout<<"Enter camara quality in MP: ";
    		cin>>camara;
    		cout<<"Enter weight : ";
    		cin>>weight;
		}
		void show()
		{
			cout<<"STORAGE: "<<space<<" GB"<<endl;
			cout<<"RAM: "<<ram<<" GB"<<endl;
			cout<<"CAMARA: "<<camara<<" MP"<<endl;
			cout<<"WEIGHT: "<<weight<<" Kg"<<endl;
		}
	     	
};
class tablet: public smartphone
{
	private:
		int screen;
	public:
		void set3()
		{
			cout<<"Enter screen size in inches: ";
			cin>>screen;
		}
		void show2()
		{
			cout<<"SCREEN SIZE: "<<screen<<" inches"<<endl;
		}
    	
};
int main()
{
	tablet sam;
    sam.set1();
    sam.set2();
    sam.set3();
    sam.show();
    sam.show2();
	return 0;
}
