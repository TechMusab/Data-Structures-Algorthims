#include <iostream>
using namespace std;
bool isPossible(int arr[], int m, int size, int mid)
{
    int studentCount = 1;
    int pageSum = 0;
    for (int i = 0; i < size; i++)
    {
        if (pageSum + arr[i] <= mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if (studentCount > m || arr[i] > mid)
            {
                // for example if arr[i] is 90 which is graeter than mid let say 50 and number of students is 2 for student 2 arr[i] is 90 whch is graeter than mid it means agar main 2 student main sahi trah divide nahi kr pa raha to agay check krne ki zarorat nahi
                return false;
            }
            pageSum = arr[i];
        }
    }
    return true;
}

int bookallocation(int arr[], int m, int size)
{
    int s = 0;
    int e = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }
    e = sum;

    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (isPossible(arr, m, size, mid))
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
    int arr[4] = {10, 20, 30, 40};
    int ans = bookallocation(arr, 2, 4);
    cout << ans;

    return 0;
}