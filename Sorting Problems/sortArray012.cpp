#include<iostream>
using namespace std;

void sortArray(int * arr, int N)
{
	int zeroCount = 0;
	int oneCount = 0;
	int twoCount = 0;
	for(int i=0;i<N;i++)
	{
		if(arr[i]==0)
		{
			zeroCount++;
		}
		else if(arr[i]==1)
		{
			oneCount++;
		}
		else if(arr[i]==2)
		{
			twoCount++;
		}
	}
	int i = 0;
	while(zeroCount)
	{
		arr[i] = 0;
		zeroCount--;
		i++;	
	}
	while(oneCount)
	{
		arr[i] = 1;
		oneCount--;
		i++;
	}
	while(twoCount)
	{
		arr[i] = 2;
		twoCount--;
		i++;
	}
}

void sortArray2(int * arr, int N)
{
	int zeroCount = 0;
	int oneCount = 0;
	int twoCount = 0;
	for(int i=0;i<N;i++)
	{
		if(arr[i]==0)
		{
			zeroCount++;
		}
		else if(arr[i]==1)
		{
			oneCount++;
		}
		else if(arr[i]==2)
		{
			twoCount++;
		}
	}
	for(int i=0;i<N;i++)
	{
		if(i<zeroCount)
		{
			arr[i] = 0;
		}
		else if(i<zeroCount+oneCount)
		{
			arr[i] = 1;
		}
		else
		{
			arr[i] = 2;
		}
	}
}


void displayArray(int * arr, int N)
{
	cout<<"Array:\t";
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}	
	cout<<"\n";
}

int main()
{
	int arr[] = { 0, 1 , 0 , 2, 2, 0 , 2, 0, 1, 0 ,1, 0 };
	const int N = sizeof(arr) / sizeof(int);
	sortArray2(arr, N);
	displayArray(arr, N);
	return 0;
}
