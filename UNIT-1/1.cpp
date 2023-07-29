#include<iostream>
using namespace std;

int area(int l)
{
	return l*l;
}

int area(int h,int w)
{
	return w*h;
}

float area(float r)
{
	return 3.14*r;
}

int main()
{
		int l,h,w;
		float r;
		
		cout<<"function overloading "<<endl;
		
		cout<<"Enter the length of square:\n";
		cin>>l;
		cout<<"Area of square is="<<area(l)<<"\n";
		
		cout<<"Enter the height of rectangle;\n";
		cin>>h;
		
		cout<<"Enter the width of rectangle:\n";
		cin>>w;
		cout<<"area of rectangle is="<<area(h,w)<<"\n";
		
		cout<<"Enter the radius of circle:\n";
		cin>>r;
		cout<<"Area of circle is ="<<area(r)<<"\n";
		
		return 0;
}
