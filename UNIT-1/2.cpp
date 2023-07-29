#include<iostream>
using namespace std;
 
 float area(float r,float pi=3.14)
 {
		return pi*r;
 }
 
int main()
{
		float r;
		cout<<"Default argument example:"<<endl;
		cout<<"Enter the radius of circle:\n";
		cin>>r;
		cout<<"Area of circle is="<<area(r)<<endl;
		return 0;
}