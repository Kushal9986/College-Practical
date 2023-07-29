#include<iostream>
using namespace std;

double power(double m,int n=2)
{
	double temp=1;
	for(int i=1;i<=n;i++)
	{
		temp=temp*m;
	}
	return temp;
}

int main()
{
	double m;
	int n;
	
	cout<<"Enter the value of number:";
	cin>>m;
	
	cout<<"Enter the value of power:";
	cin>>n;
	
	
	cout<<"value of m to the power n is="<<power(m,n)<<"\n";
    cout<<"value of m to the power n without passing n is="<<power(m)<<"\n";
}