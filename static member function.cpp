#include<iostream>
using namespace std;
class kitefestival
{
    private:
	   int kite;     //instance variable/member variable//
	   static int charkhi;  //static variable//
	public:
	   void setkites(int k)
	   {
	     kite=k;
		 cout<<"No. of kites bought "<<k<<endl;	
		 charkhi++;
       } 	
       void displaycharkhiuse()      //instance member function//
       {
     	cout<<"Charkhi used "<<charkhi<<endl;
	   }
	   static void see()        // Static memeber function//
	   {
	   	cout<<"Charkhi used "<<charkhi<<endl;
	   }
	 
};
int kitefestival::charkhi=0;             //static member variable//
int main()
{    
     kitefestival::see();                //call of static member variable  without creating object//
     kitefestival A,B,C;
     A.displaycharkhiuse();
     B.displaycharkhiuse();
     C.displaycharkhiuse();
     A.setkites(5);
     A.displaycharkhiuse();
     B.setkites(8);
     B.displaycharkhiuse();
     C.setkites(10);
     C.displaycharkhiuse();

	return 0;
}
