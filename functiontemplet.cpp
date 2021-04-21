#include<iostream>
using namespace std;
//template <class T>

int getmax(int a,int b)
{
	int result;
	result= a>b?a:b;
	return result;
}
long getmax1(long a,long b)
{
	long result;
	result= a>b?a:b;
	return result;
}
int main()
{
	int i=5,j=6,k;
	long l=10,m=5,n;
	k=getmax(i,j);
	n=getmax1(l,m);
	cout<<"The int maximum value is: "<<k<<endl;
	cout<<"The long maximum value is: "<<n<<endl;

}
