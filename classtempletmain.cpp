#include<iostream>
using namespace std;
template <class T>
class mypair
{
	private:
		T a,b;
	public:
		mypair(T first,T second)
		{
			a=first;
			b=second;
		}
	T getmax();
};
template <class T>
T mypair<T>::getmax()
{
	T result;
	result=a>b?a:b;
	return result;
}
int main()
{
	mypair <int> myobject(100,75);
	cout<<"The maximum value is: "<<myobject.getmax();
	return 0;
}
