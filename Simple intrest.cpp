#include<iostream>
using namespace std;
class SI{
	private:
		float s ,p , r, t;
	public:
    SI(float R,float P, float T)
   {
		p=P;
	    r=R;
        t=T;
	}
    void calculate()
    {   
        s=(p*r*t)/100;
    	
	}
	SI(SI &g)
	{
		p=g.p;
		r=g.r;
		t=g.t;
	}
	void show();
};
void SI::show()
{
		
		cout<<"Principle Amount: "<<p<<endl;
		cout<<"Rate of interest: "<<r<<endl;
		cout<<"Time: "<<t<<endl;
		cout<<"Simple interest: "<<s<<endl;
	
	

}
int main()
{
	SI A(2.3,1000,2),B(4.2,2000,1),C(A);
	A.calculate();
	A.show();
	B.calculate();
	B.show();
	C.calculate();
	C.show();
	return 0;
}
