#include <iostream>
using namespace std;
void printArray(int arr[],int size){
    cout<<"Printing the array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[5]={1,2,3};
    printArray(arr,5);
    return 0;
}