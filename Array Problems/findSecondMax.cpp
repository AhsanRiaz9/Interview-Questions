#include<iostream>
using namespace std;

int findSecondMax(int * arr, int N)
{
	int max1 = arr[0];
	int max2 = arr[1];
	if(max2>max1)
	{
		int temp = max1;
		max1 = max2;
		max2 = temp;
	}
	for(int i=2;i<N;i++)
	{
		if(arr[i]>=max1)
		{
			max2 = max1;
			max1 = arr[i];
		}
	}
	return max2;
}

int main()
{
	int arr [] = {84,86,86,96,10};
	cout<<"Second Max: " << findSecondMax(arr,sizeof(arr)/sizeof(int));
	return 0;
}
