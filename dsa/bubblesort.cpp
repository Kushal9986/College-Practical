#include<iostream>
using namespace std;


	void swapped (int *pa1, int *pa2)
	{
		int temp=*pa1;
		*pa1=*pa2;
		*pa2=temp;
	}

 void bubblesort(int arr[],int n)
{
	for(int i=0 ; i<n-1; i++)
	{
		bool swap=false;
		for(int j=0; j<n-i-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				swapped(&arr[j],&arr[j+1]);
				swap=true;
			}
		}
		
		     if (swap== false)
            break;
	}
	
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout<<"index "<<i<<" is: "<<arr[i]<<endl;
}



int main()
{
	int arr[]={50,23,14,32,40,21};
	int n=sizeof(arr)/sizeof(arr[0]);
	
		cout<<"array before sorting"<<endl;
		printArray(arr,n);
		bubblesort(arr,n);
		
		cout<<"after sorting"<<endl;
		printArray(arr,n);
		
	
	
	
	return 0;
}