#include<iostream>
using namespace std;

int& getref(int& rta)
{
	return rta;
}

int main()
{
        int a=5;
		int&b=getref(a);
		cout<<"value of  a is "<<a;
	    return 0;
}