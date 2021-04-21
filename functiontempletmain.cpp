#include<iostream>
using namespace std;
template <class T>

T getmax(T a,T b)
{
	int result;
	result= a>b?a:b;
	return result;
}

int main()
{
	int i=5,j=6,k;
	long l=10,m=5,n;
	k=getmax<int>(i,j);
	n=getmax<long>(l,m);
	cout<<"The int maximum value is: "<<k<<endl;
	cout<<"The long maximum value is: "<<n<<endl;

}
