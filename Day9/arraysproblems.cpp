#include <iostream>
using namespace std;
void printalternate(int arr[], int size)
{
    int i = 0;
    int j = 1;
    while (i < size && j<size)
    {
        swap(arr[i], arr[j]);
        i = i + 2;
        j = j + 2;
    }
}
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7,8};
    printalternate(arr, 8);
    printarray(arr,8);
    return 0;
}