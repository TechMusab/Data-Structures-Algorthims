#include <iostream>
using namespace std;
int mountainpeak(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid] + 1)
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    }
    return s;
}
int main()
{
    int arr[6] = {0, 1, 3, 2, 1, 0};
    cout << mountainpeak(arr, 6);

    return 0;
}