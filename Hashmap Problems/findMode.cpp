#include <iostream>
#include<map>
using namespace std;

void findMode(int * arr, int N)
{
    map<int,int> map;
    int num;
	for(int i=0;i<N;i++)
    {
        num = arr[i];
        if(!map.empty() && map.find(num)!=map.end())
        {
            map[num] = map[num] + 1;
        }
        map[num] =  1;
    }
	for(auto iter = map.begin(); iter!=map.end(); iter++)
    {
    	cout<<iter->first << " " << iter->second << '\n';
	}
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    findMode(arr, 5);
    return 0;
}
