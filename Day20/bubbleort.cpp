#include <iostream>
using namespace std;

void bubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        bool swapped = false; // Flag to check if any swapping occurred
        for (int j = 0; j < size - i - 1; j++)
        {
            // use size-i-1 because it compares all the element as if size=10 loop runs from 0 to 8 index at 8 we have 2nd last element so it compares with 9th element inside the loop. size -i may go out bounds

            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped)
        {
            break;
        }
    }
}
int main()
{
    int arr[10] = {0, 1, 2, 4, 2, 1, 1, 2, 3, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}