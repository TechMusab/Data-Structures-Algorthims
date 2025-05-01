#include <iostream>
using namespace std;
int findpivot(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
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
int binarysearch(int arr[], int s, int e, int key)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int seachinrotatedsortedarray(int arr[], int size, int key)
{
    int pivot = findpivot(arr, size);
    if (key > pivot && key <= arr[size - 1])
    {
        return binarysearch(arr, pivot + 1, size - 1, key);
    }
    else
    {
        return binarysearch(arr, 0, pivot - 1, key);
    }
}
int main()
{
    int arr[5] = {7, 9, 1, 2, 3};
    cout << seachinrotatedsortedarray(arr, 5, 10);

    return 0;
}
