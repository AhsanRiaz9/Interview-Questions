#include<iostream>
using namespace std;

int findMax(int * arr, int N)
{
	int max = arr[0];
	for(int i=1;i<N;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	return max;
}

int main()
{
	int arr [] = {2,6,79,96,10};
	cout<<"Max: " << findMax(arr,sizeof(arr)/sizeof(int));
	return 0;
}
