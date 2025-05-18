#include <iostream>
using namespace std;

void waveprint(int arr[][4], int cols, int rows)
{
    for (int i = 0; i < cols; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < rows; j++)
            {
                cout << arr[j][i]<<" ";
            }
        }
        else
        {
            for (int j = rows - 1; j >= 0; j--)
            {
                cout << arr[j][i]<<" ";
            }
        }
    }
}

int main()
{
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    waveprint(arr, 4, 3);

    return 0;
}
