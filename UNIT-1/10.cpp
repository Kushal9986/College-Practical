#include<iostream>
using namespace std;

 class number
 {
	 int x,y;
	 public:
	 int setanddisplay(int a,int b)
	 {
		 x=a;
		 y=b;
		 cout<<"a="<<a<<"\n";
		 cout<<"b="<<b<<"\n";
		 return 0;
	 }
 };
 
int main()
{
	number n1;
	number* np=&n1; //create pointer to object
	
	cout<<"call using pointer to object:\n";
	np->setanddisplay(10,20);
	
	cout<<"call using pointer to member function"<<"\n";
	int (number::* pf)(int,int)=&number::setanddisplay;	//create pointer ot member function
	(n1.*pf)(30,40);
	
	cout<<"Call using pointer to object and pointer to member function"<<endl;
	(np->*pf)(50,60);
	
	return 0;
}