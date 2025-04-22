#include <iostream>
using namespace std;
void reversearray(int arr[], int size)
{
    int arr_2[size];
    for (int i = 0; i < size; i++)
    {
        arr_2[i]=arr[i];
    }
    int j = 0;
    for (int i = size - 1; i >= 0; i--)
    {
        arr[j] = arr_2[i];
        j++;
    }
}
void printArray(int arr[], int size)
{
    cout << "Printing the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5,9,1};
    reversearray(arr, 7);
    printArray(arr, 7);
    return 0;
}