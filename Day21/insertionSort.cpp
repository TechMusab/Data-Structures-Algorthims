#include <iostream>
using namespace std;

void inserstionSort(int arr[], int size)
{
    int i=1;
    while(i<size){
        int temp=arr[i];
        int j=i-1;
        while(j>=0){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
            j--;
        }
        arr[j+1]=temp;
        i++;
    }
}
int main()
{
    int arr[6] = {5,2,5,7,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    inserstionSort(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout <<arr[i] << " ";
    }

    return 0;
}