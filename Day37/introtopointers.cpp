#include<iostream>
using namespace std;

int main(){
int num=5;
int *ptr=&num; 
cout<<ptr<<endl; 
cout<<*ptr<<endl; 
cout<<"Before:"<<num<<endl;
(*ptr)++;
cout<<"After:"<<num<<endl; 
int *q=ptr;
//Copying a pointer
cout<<q<<"-"<<ptr<<endl;
cout<<*q<<"-"<<*ptr<<endl;



    return 0;
}