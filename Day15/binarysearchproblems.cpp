#include <iostream>
using namespace std;
int firstoccurrence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int first = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            first = mid;
            e = mid - 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return first;
}
int lastoccurrence(int arr[], int size, int key)
{
    int s = 0;
    int e = size - 1;
    int last = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == key)
        {
            last = mid;
            s = mid + 1;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return last;
}

int main()
{
    int arr[10]={1,2,2,2,2,3,5,6,7,8};
    int size = 10;
    int key = 2;
    int first = firstoccurrence(arr, size, key);
    int last = lastoccurrence(arr, size, key);
    if (first == -1 && last == -1)
    {
        cout << "Key not found" << endl;
    }
    else
    {
        cout << "First occurrence: " << first << endl;
        cout << "Last occurrence: " << last << endl;
        cout << "Total occurrences: " << last - first + 1 << endl;
    }

    return 0;
}