#include<iostream>
using namespace std;

void reverseString(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(str[s],str[e]);
        s++;
        e--;
    }
}
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
reverseString(ch,count);
cout<<"Reversed string is: "<<ch<<endl;

    return 0;
}