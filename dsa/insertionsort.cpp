#include<iostream>
using namespace std;

int main()
{

	int arr[]={20,12,47,25,91,31,9,32,7,56,89};
	int j;
	int n=sizeof(arr)/sizeof(arr[0]);
	int key;
	for(int i=1; i<n; i++)
	{
		int key=arr[i];
		j=i-1;
		while(j>=0 && arr[j]>key)
		{
			arr[j+1]=arr[j];
			j=j-1;
		}
		arr[j+1]=key;
	}
	
	cout<<"sorted array in  ascending order"<<endl;
	for(int j=0; j<n; j++)
	{
		cout<<"arr index "<<j <<" is: "<<arr[j]<<endl;
	}
	
	return 0;
}