#include <iostream>
using namespace std;
struct person
{ char name[30];
  int age;
  float salary;
	   
};
void display(struct person);
int main()
{
	struct person s1;
	cout<<"Enter your name";
	cin>>s1.name;
	cout<<"Enter your age";
	cin>>s1.age;
	cout<<"Enter your salary";
	cin>>s1.salary;
	display(s1);
	return 0;
}
void display(struct person p)
{
	cout<<"Displaying the details"<<endl;
	cout<<"Name"<<p.name<<endl;
	cout<<"Age"<<p.age<<endl;
	cout<<"Salary"<<p.salary<<endl;

}
