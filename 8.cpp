#include<iostream>
#include<cstring>
using namespace std;

class person
{
	char name[20];
	int age;
	public:
	void setvalue(int lage,char lname[])
	{
		age=lage;
		strcpy(name,lname);
	}
	
	person greater(person y)
	{
		if(this->age>y.age)
		{
			return *this;
		}
		else
		{
			return y;
		}
	}
	void display()
	{
		cout<<"age is="<<age<<"\n";
		cout<<"name is="<<name<<"\n";
	}
};

int main()
{
	person p1,p2,p3;
	
	p1.setvalue(20,"kushal");
	p2.setvalue(25,"raj");
	p3=p1.greater(p2);
	cout<<"details of person with greater age:\n";
	p3.display();
	return 0;
}