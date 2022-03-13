#include<iostream>
using namespace std;

int findSecondMin(int * arr, int N)
{
	int min1 = arr[0];
	int min2 = arr[1];
	if(min2<min1)
	{
		int temp = min1;
		min1 = min2;
		min2 = temp;
	}
	for(int i=2;i<N;i++)
	{
		if(arr[i]<min1)
		{
			min2 = min1;
			min1 = arr[i];
		}
		else if(arr[i]<min2)
		{
			min2 = arr[i];
		}
	}
	return min2;
}

int main()
{
	int arr [] = {6,8,9,5,10};
	cout<<"Second Min: " << findSecondMin(arr,sizeof(arr)/sizeof(int));
	return 0;
}
