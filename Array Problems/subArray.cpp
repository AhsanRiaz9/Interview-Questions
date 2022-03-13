// C++ program to print largest contiguous array sum
#include<iostream>
#include<climits>
using namespace std;

int maxSubArraySum(int a[], int size)
{
	int max = INT_MIN, sum = 0;

	for (int i = 0; i < size; i++)
	{
		sum = sum + a[i];
		if (max < sum)
			max = sum;

		if (sum < 0)
			sum = 0;
	}
	return max;
}

/*Driver program to test maxSubArraySum*/
int main()
{
	int a[] = {-2, -3, 4, -1, -2, 1, 5, -3};
	int n = sizeof(a)/sizeof(a[0]);
	int max_sum = maxSubArraySum(a, n);
	cout << "Maximum contiguous sum is " << max_sum;
	return 0;
}
