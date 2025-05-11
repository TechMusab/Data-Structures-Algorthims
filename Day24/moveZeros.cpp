#include<iostream>
using namespace std;

void moveZeros(int arr[],int size){
    int i=0;
    int j=0;
    while(j<size){
        if(arr[j]!=0){
            swap(arr[i],arr[j]);
            i++;
        }
        j++;
    }
}

int main(){
    int arr[5]={0,0,0,3,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    moveZeros(arr,size);
    cout<<"Array after moving zeros: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}