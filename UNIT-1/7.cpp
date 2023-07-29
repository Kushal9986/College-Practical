#include<iostream>
using namespace std;

class a
{
	int x;
	public:
	void setvalues(int x1)
	{
		x=x1;
	}
	
	int getvalues()
	{
		return x;
	}
};
class b
{
	int y;
	public:
	void setvalues(int y1)
	{
		y=y1;
	}
	
	int getvalues()
	{
		return y;
	}
};

int main()
{
	a oa;
	b ob;
	
	oa.setvalues(5);
	ob.setvalues(10);
	
	cout<<"values before swap=\n";
	
	cout<<"x="<<oa.getvalues();
	cout<<"\n";
	cout<<"y="<<ob.getvalues();
	
	int temp=oa.getvalues();
	oa.setvalues(ob.getvalues());
	ob.setvalues(temp);
	
		cout<<"\nvalues after swap  =\n";
	
	cout<<"x="<<oa.getvalues();
	cout<<"\n";
	cout<<"y="<<ob.getvalues();
	cout<<"\n";
	
	return 0;
}