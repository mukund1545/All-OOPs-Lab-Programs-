#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	fout.open("My file");
	fout<<"Hi";
    fout.close();
    
 
 //   fin.close();
	return 0;
}
