#include<iostream>
using namespace std;

int findMin(int * arr, int N)
{
	int min = arr[0];
	for(int i=1;i<N;i++)
	{
		if(arr[i]<min)
		{
			min = arr[i];
		}
	}
	return min;
}

int main()
{
	int arr [] = {2,6,79,96,10};
	cout<<"Min: " << findMin(arr,sizeof(arr)/sizeof(int));
	return 0;
}
