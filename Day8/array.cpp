#include <iostream>
using namespace std;
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int max(int arr[], int size)
{
    int max = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int min(int arr[], int size)
{
    int min = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
void update(int arr[])
{
    arr[0] = 190;
}
int main()
{
    int arr[12] = {1, 2, 3, 1, 4, 7, 3, 123, 28, 6, 23, 65};
    printArray(arr,5);
    // char ch[5]={'a','b','c','d','e'};
    // for(int i=0;i<5;i++){
    //     cout<<ch[i]<<endl;
    // }
    // int maximum = max(arr, sizeof(arr) / sizeof(int));
    // cout << "Maximum:" << maximum << endl;
    // int minimum = min(arr, sizeof(arr) / sizeof(int));
    // cout << "Minimum:" << minimum << endl;
    update(arr);
    cout << "Updated array:" << endl;
    printArray(arr, sizeof(arr) / sizeof(int));
    return 0;
}
// Arrays are called by reference if you channge the value the actual array chanegs