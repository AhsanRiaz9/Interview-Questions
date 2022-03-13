#include <iostream>
#include<map>
using namespace std;

void findPair(int * arr, int N, int targetSum){
    int comp;
    map<int,int> map;
    int num;
    for(int i=0;i<N;i++)
    {
        num = arr[i];
        comp = targetSum - num;
        if(!map.empty() && map.find(comp)!=map.end())
        {
            cout<<"\nPair: " << arr[i] << " and " << comp;
            cout<<"\nIndex: "<<i<<" " << map[comp];
            return;
        }
        map[num] =  i;
    }
    cout<<"\nNo Pair";
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    findPair(arr, 5, 24);
    return 0;
}
