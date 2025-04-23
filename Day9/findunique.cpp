#include <iostream>
using namespace std;
int printunique(int arr[], int size)
{
    int ans = 0;

    for (int i = 0; i < size; i++)
    {

        ans = ans ^ arr[i];
    }
    return ans;
}

int main()
{
    int arr[7] = {1, 1, 2, 6, 3, 3,2};
    cout<<printunique(arr, 7);


    return 0;
}