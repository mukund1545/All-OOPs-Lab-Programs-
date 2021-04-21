// In C we use malloc and in C++ we use new operator//

#include<iostream>
using namespace std;
int main()
{
	int *ptr;    //SMA//
	ptr=new int;  //Creation of integer block dynamically using new//
	float *ptr1;
	ptr1=new float;  //Creation of float block dynamically using new//
    int *ptr2;
    ptr2=new int[4];	//integer array//
    
    
    delete ptr;      //Deletion of dynamically created block which was refered by ptr using delete operator//
    delete ptr1;
	delete[] ptr2;	
	
	
	
	
	return 0;
}
