#include <iostream>
using namespace std;
struct Book
{
  int bookid;
  float price;	
};
int main()
{
	Book b1,*ptr;
	ptr=&b1;
	cout<<"Enter Book ID"<<endl;
	cin>>ptr->bookid;
	cout<<"Enter Book Price"<<endl;
	cin>>(*ptr).price;
	cout<<"Details of book"<<endl;
	cout<<"Book ID is: "<<(*ptr).bookid<<endl;
	cout<<"Book Price is: "<<(*ptr).price<<endl;
	return 0;
}
