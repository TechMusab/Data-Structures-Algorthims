#include<iostream>
using namespace std;
int main(){
    cout<<"Enter a number"<<endl;
    int n;
    cin>>n;
    for (int i=2; i<n;i++){
        if(n%i==0){
            cout<<"Number is not prime"<<endl;
            break;
        }
        else{
            cout<<"Number is prime"<<endl;
        }
    }


    return 0;
}