#include<iostream>
using namespace std;
class student{
	protected:
		char name[30];
        int rollno, sem;
	public:
	    void set1()
		{
			cout<<"Enter name: ";
			cin>>name;
			cout<<"Enter rollno: ";
			cin>>rollno;
			cout<<"Enter semester: ";
			cin>>sem;
            cout<<endl;
		}	
		void show1()
		{
			cout<<"Name: "<<name<<endl;
			cout<<"Roll No.: "<<rollno<<endl;
			cout<<"Semester: "<<sem<<endl<<endl;
		}
};
class marks: public student
{  
    protected:
    	char sub1[30];
    	int marks1;
   	    char sub2[30];
    	int marks2;   	
		char sub3[30];
    	int marks3;
    public:
    	void set2()
    	{
    		cout<<"Enter subject 1 name: ";
    		cin>>sub1;
    		cout<<"Enter Marks in "<<sub1<<": ";
    		cin>>marks1;
    		cout<<"Enter subject 2 name: ";
    		cin>>sub2;
    		cout<<"Enter Marks in "<<sub2<<": ";
    		cin>>marks2;
    		cout<<"Enter subject 3 name: ";
    		cin>>sub3;
    		cout<<"Enter Marks in "<<sub3<<": ";
    		cin>>marks3;
            cout<<endl;
		}
		void show2()
		{
			cout<<"Subject name: "<<sub1<<endl;
			cout<<"Marks in "<<sub1<<": "<<marks1<<endl;
			cout<<"Subject name: "<<sub2<<endl;
			cout<<"Marks in "<<sub2<<": "<<marks2<<endl;
			cout<<"Subject name: "<<sub3<<endl;
			cout<<"Marks in "<<sub3<<": "<<marks3<<endl<<endl;

		}
		
};
class result: public marks
{
	private:
		float sum;
		float per;
	public:
		void set3()
		{
			sum=marks1 + marks2 +marks3;
			per=(sum/300)*100;
		}
		void show3()
		{
			cout<<"Total marks obtain: "<<sum<<endl;
			cout<<"Result is: "<<per<<"%"<<endl<<endl;
		}
		void grade()
		{
			if(per>=90)
			{
				cout<<"Grade A"<<endl;
			}
			if(per<90&&per>=80)
			{
				cout<<"Grade B"<<endl;
				
			}
			if(per<80&&per>=60)
			{
				cout<<"Grade C"<<endl;
			}
			else
			{ cout<<"Grade D"<<endl;
			}
			
		}
	
};
int main()
{
	result A;
	A.set1();
	A.set2();
	A.set3();
	A.show1();
	A.show2();
	A.show3();
	A.grade();
}

