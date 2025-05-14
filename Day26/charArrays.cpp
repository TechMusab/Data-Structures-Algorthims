#include<iostream>
using namespace std;

int main(){
char ch[10];
cout<<"Enter a string: ";
cin>>ch;
int count=0;
int i=0;
while(ch[i]!='\0'){
    count++;
    i++;
}
cout<<"Length of the string is: "<<count<<endl;

    return 0;
}