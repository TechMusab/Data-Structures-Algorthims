#include <iostream>
using namespace std;
int findpivot(int arr[], int size)
{
    int s=0;
    int e=size-1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] >= arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return arr[s];
}

int main()
{
int arr[5]={7,9,1,2,3};
cout<<findpivot(arr,5);

    return 0;
}
