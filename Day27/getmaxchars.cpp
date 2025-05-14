#include <iostream>
using namespace std;

char getmaxoccurenceofcharcterinstring(string s){
    int ans[26]={0};
    for(int i=0;i<s.length();i++){
        int n=s[i]-'a';
        ans[n]++;
    }
     int index=-1, maxi=-1;
    for(int i=0;i<26;i++){
        if(maxi<ans[i]){
            index=i;
            maxi=ans[i];
        }
    }

    int finalAns='a'+index;
    return finalAns;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    char ans=getmaxoccurenceofcharcterinstring(s);
    cout<<"The maximum character in the string is: "<<ans<<endl;

    return 0;
}