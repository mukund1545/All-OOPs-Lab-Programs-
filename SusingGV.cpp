#include<iostream>
using namespace std;
int n=0;
struct book{
		int page;

	char name[30];

};


struct book details(struct book );
void display(struct book );

struct book details(struct book b[])
{
	int i;
	cout<<"Enter the details of the books: "<<endl;
	for(i=0;i< ::n;i++)
	{   	cout<<"Enter the page of "<<i+1<<" book"<<endl;
		cin>>b[i].page;
	
		cout<<"Enter the name of "<<i+1<<" book"<<endl;
		cin>>b[i].name;
	}
	return b[n];
}

void display(struct book b[])
{   int i;
	cout<<"Displaying the details of books: "<<endl;
	for(i=0;i<::n;i++)
	{		cout<<"Pages of book "<<i+1<<" is "<<b[i].page<<endl;

		cout<<"Name of book "<<i+1<<" is "<<b[i].name<<endl;
	}
}
 
int main()
{   int n;
    struct book g[n];
	cout<<"Enter the no. of books: "<<endl;
	cin>>n;
	::n= n;
	g[n]=details(g);
	display(g);
}

