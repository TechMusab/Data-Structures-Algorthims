#include<iostream>
using namespace std;

int main(){
char ch[10];
cout<<"Enter a string: ";
cin>>ch;
ch[3]='\0';
cout<<ch;

    return 0;
}