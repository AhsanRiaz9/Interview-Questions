#include<iostream>
using namespace std;

void shiftRightZero(int * arr, int N)
{
	int count = 0;
	for(int i=0;i<N;i++)
	{
		if(arr[i]==0)
		{
			count++;
		}	
	}
	int j=N-1;
	for(int i = N-1;i>=0;i--)
	{
		if(arr[i]!=0)
		{
			arr[j] = arr[i];
			j--;
		}
	}	
	for(int i=0;i<count;i++)
	{
		arr[i] = 0;
	}
}

void display(int * arr, int N)
{
	cout<<'\n';
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<" ";
	}
}

int main()
{
	int arr[] = {1, 0, 5, 6, 0, 0, 26, 14};
	int N = sizeof(arr)/sizeof(int);
	shiftRightZero(arr,N);
	display(arr,N);
	return 0;
}
