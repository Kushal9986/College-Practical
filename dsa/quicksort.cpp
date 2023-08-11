#include<iostream>
using namespace std;
int partition(int arr[],int start,  int end)
{
	int i=start-1;
	int j=0;
	int pivot=arr[end];
	int temp=0;
	for(j=start; j<end;j++)
	{
		if(arr[j]<pivot)
		{
			i++;
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
		}
	}
	
	temp=arr[i+1];
	arr[i+1]=arr[end];
	arr[end]=temp;
	
	return i+1;
}


void quick(int arr[],int  start ,int  end)
{
	if(start<end)
	{
	int p=partition(arr, start,end);
	quick(arr,start,p-1);
	quick(arr,p+1,end);
	
	}
}

void print(int arr[],int size)
{
	for(int i=0; i<=size-1; i++ )
	{
		cout<<"arr :"<<i <<"is :"<<arr[i]<<endl;
	}
}





int main()
{
	int arr[]={ 65,12,75,45,32,95,52,23,12,10,15};
	int size=sizeof(arr)/sizeof(arr[0]);
	cout<<"size of array is="<<size <<endl;
	print(arr,size);
	
	quick(arr,0 , size-1);
	
		print(arr,size);
	
	return 0;
}