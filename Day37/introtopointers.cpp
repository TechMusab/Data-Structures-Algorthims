#include<iostream>
using namespace std;

int main(){
int num=5;
int *ptr=&num; 
cout<<ptr<<endl; // Address of num
cout<<*ptr<<endl; // Value at the address stored in ptr


    return 0;
}