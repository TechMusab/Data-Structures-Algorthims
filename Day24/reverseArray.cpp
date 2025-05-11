#include<iostream>
using namespace std;
 

void reverseArrayAfterSpecificIndex(int arr[],int size,int index){
    int i=index+1;
    int j=size-1;
    while(i<=j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    reverseArrayAfterSpecificIndex(arr,size,0);
    cout<<"Reversed array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}