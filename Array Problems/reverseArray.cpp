#include<iostream>
using namespace std;

void reverseArray1(int * arr, int N)
{
	int start = 0;
	int end = N - 1;
	int temp;
	while(start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;	
	}	
}

void displayArray(int * arr, int N)
{
	cout<<"Array:\t";
	for(int i=0;i<N;i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout<<'\n';
}

int main()
{
	int arr[] = {1,2,3,4,5};
	int N = sizeof(arr)/sizeof(int);
	reverseArray1(arr, N);
	displayArray(arr,N);
	return 0;
}
