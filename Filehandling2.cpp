#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char n[100];
	ifstream fin("My file");
	fin.getline(n , 100);
	cout<<n;
	return 0;
}
