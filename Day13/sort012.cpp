#include<iostream>
using namespace std;

void sort012(int arr[],int size){
    int i=0;
    int j=size-1;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        else if(arr[j]==2){
            j--;
        }
        else if(arr[i]==1 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
        }
        else if(arr[i]==2 && arr[j]==1){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        else if(arr[i]==1 && arr[j]==2){
            j--;
        }
        else if(arr[i]==2 && arr[j]==1){
            i++;
        }
        else if(arr[i]==2 && arr[j]==0){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        
    }
}

int main(){
    int arr[]={0,1,1,2,2,1,0,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    sort012(arr,size);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}