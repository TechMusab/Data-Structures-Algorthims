#include <iostream>
using namespace std;
int binarysearch(int arr[], int key, int s, int e)
{
    while (s <= e)
    {
        int mid = s + (e-s)/ 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            return binarysearch(arr, key, s, mid - 1);
        }
        else if (arr[mid] < key)
        {
            return binarysearch(arr, key, mid + 1, e);
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 3;
    int s = 0;
    int e = n - 1;
    int result = binarysearch(arr, key, s, e);
    if (result == -1)
    {
        cout << "Element not found";
    }
    else
    {
        cout << "Element found at index: " << result;
    }
    return 0;
}