#include<iostream>
#include<cstring>
using namespace std;

int n=20;
class student
{
	int roll;
	char name[25];
	public:
	void setvalues(int ,char []);

	void  display();

};
	void student:: display ()
	{
		cout<<"Name of student is :"<<name<<"\n";
		cout<<"roll  no of student is:"<<roll<<"\n";
	}
	
	void student:: setvalues (int lroll,char lname[25])
	{
		roll=lroll;
		strcpy(name,lname);
	}

int main()
{

	
	int roll;
	char name[25];
	student s;
	cout<<"Enter your roll no:";
	cin>>roll;
	cout<<"Enter your name:";
	cin>>name;
	s.setvalues(roll,name);
	s.display();
	
	int n=10;
	cout <<"scope resolution operator is used to access global variable"<<endl;
	cout<<"value of local n="<<n<<endl;
	cout<<"value of global n using scope resolution operator\"::\"="<<::n<<endl;
	
	return 0;
	
}