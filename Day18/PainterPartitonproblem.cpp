#include <iostream>
using namespace std;
bool isPossible(int arr[], int n, int mid, int size)
{
    int painter = 1;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (sum + arr[i] <= mid)
        {
            sum += arr[i];
        }
        else
        {
            painter++;
            if (painter > n || arr[i] > mid)
            {
                return false;
            }
        }
    }
    return true;
}
int painterparition(int arr[], int n, int size)
{
    int sum = 0;
    int s = 0;

    int ans = -1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    int e = sum;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, n, mid, size))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    int arr[] = {10, 20, 30, 40};
    int n = 2;
    int size = sizeof(arr) / sizeof(arr[0]);
    int ans = painterparition(arr, n, size);
    cout << "The minimum time required to paint the boards is: " << ans << endl;

    return 0;
}