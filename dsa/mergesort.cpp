#include<iostream>
using namespace std;


void merge(int arr[], int ssa,  int index1,  int arr2[],  int ssa2,  int index2,  int arr3[],int index)
{
	
//	cout<<"inside merge called"<<endl;
	while(ssa&&ssa2)
	{
		if(arr[index1]<arr2[index2])
		{
			arr3[index]=arr[index1];
			ssa--;
			index1++;
			index++;
		}
		
		else
		{
			arr3[index]=arr2[index2];
			ssa2--;
			index2++;
			index++;
		}
			
	}
	
		while(ssa)
		{
			arr3[index]=arr[index1];
			index1++;
			index++;
			ssa--;
		}
		
		while(ssa2)
		{
			arr3[index]=arr2[index2];
			index2++;
			index++;
			ssa2--;
		}
}


void mergepass(int arr[],int ssa,int n,int arr1[])
{
		int i=1;
	//cout<<"inside merge pass called "<<i <<"time"<<endl;
	//cout<<"size of subarray is="<<ssa<<endl;
		int j;
		int nop=n/(ssa*2);
	//	cout<<"number of pairs"<<nop<<endl;
		int consdrd=nop*ssa*2;
		//cout<<"size of considered element is="<<consdrd<<endl;
		int rmd=n-consdrd;
	//	cout<<"no of remaining elements is="<<rmd<<endl;
		
		for(j=0; j<nop; j++)
		{
			//cout<<"inside merge pass loop "<<j <<"time"<<endl;
			int lb=(j*2)*ssa;
			//cout<<"lower bound is="<<lb;
			merge(arr,ssa,lb,arr,ssa,lb+ssa,arr1,lb);
		}
		
		if(rmd<=ssa)
		{
			for(int k=0; k<rmd; k++)
			{
				arr1[consdrd+k]=arr[consdrd+k];
			}
		}
		
		else
		{
			merge(arr,ssa,consdrd,arr,rmd-ssa,consdrd+ssa,arr1,consdrd);
		}
		i++;
}



void merge_sort(int arr[],int n)
{
	
	//cout<<"inside merge sort"<<endl;
	int ssa=1;
	//cout<<"size of sub array is"<< ssa<<endl;
	int arr1[11];
	
	while(ssa<n)
	{
		mergepass(arr,ssa,n,arr1);
		mergepass(arr1,ssa*2,n,arr);
		ssa=ssa*4;
	}
	
}





int main()
{    
	int arr[]={54,12,34,85,26,97,41,21,55,65,12,25,108,65,84,25,64,23,24,82,91,75,82,96,84,53,94,23,58,74,96,14,34,61,76,80,2,52,14,32,33,5891,3592,8,52,60,35,67,47,35,68,80,43,89,35,99,65,11,77,99,62,36,68,90,53,78,81,77,56,61,46,47,61,94,77,65,54,63,25,42,97,13,52,93,39,23,88,99,8,32};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<"Size of array is=:"<<n<<endl;
	
	for(int i=0; i<n; i++)
	{
		//cout<<"called for loop for "<<i<<" st time"<<endl;
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	//cout<<"before call"<<endl;
	merge_sort(arr,n);
//cout<<"after merge sort"<<endl;
		for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
	return 0;
}

