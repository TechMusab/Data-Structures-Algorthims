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
cout<<q<<"-"<<ptr<<endl;
cout<<*q<<"-"<<*ptr<<endl;

int i=3;
int *j=&i;
*j=*j+1;
cout<<*j<<endl;

cout<<"Before:"<<j<<endl;
j=j+1; 
cout<<"After:"<<j<<endl;


    return 0;
}