#include <iostream>
using namespace std;
void countoccurences(int arr[], int size, int count[])
{
    int isvisited[size];
    for (int i = 0; i < size; i++)
    {
        if (arr[i]!=isvisited[i])
        {
            isvisited[i]=arr[i];
            count[i] = 0;
            for (int j = 0; j < size; j++)
            {
                if (arr[i] == arr[j])
                {
                    count[i] = count[i] + 1;
                }
            }
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 2, 1};
    int count[5];
    countoccurences(arr, 5, count);
    for (int i = 0; i < 5; i++)
    {
        cout << count[i] << " ";
    }

    return 0;
}