#include<iostream>
#include<cstring>
using namespace std;

class student
{
	int r_no,sci,math,eng,c,cplus,total;
	char name[25];
	public:
	void getval()
	{
		cout<<"Enter your roll no:\n";
		cin>>r_no;
		
		cout<<"Enter your name:";
		cin>>name;
		
		cout<<"Enter marks for science:";
		cin>>sci;
		
		cout<<"Enter marks for maths:";
		cin>>math;
		
		cout<<"Enter marks for english:";
		cin>>eng;
		
		cout<<"Enter marks for c:";
		cin>>c;
		
		cout<<"Enter marks for c++:";
		cin>>cplus;
	}
	
	void sum()
	{
		total=sci+math+eng+c+cplus;
	}
	
	void display()
	{
		cout<<"roll no="<<r_no<<"\n";
		cout<<"Name="<<name<<"\n";
		cout<<"marks of science="<<sci<<"\n";
		cout<<"marks of maths is="<<math<<"\n";
		cout<<"marks of english is="<<eng<<"\n";
		cout<<"marks of c is="<<c<<"\n";
		cout<<"marks of c++ is="<<c++<<"\n";
		cout<<"total marks is ="<<total<<"\n";
	}
	

};

int main()
{
	student s;
	s.getval();
	s.sum();
	cout<<"	"<<"students details"<<"	"<<"\n";
	s.display();
	return 0;	
}
