#include<iostream>
#include<vector>
using namespace std;

 int compress(vector<char>& chars) {
        int i=0;
        int ans=0;
        int n=chars.size();
      
        while(i<n){
            int j=i+1;
            while(j<n && chars[i]==chars[j]){
                j++;
            }
            chars[ans++]=chars[i];
            int count=j-i;
            if(count>1){
                string s=to_string(count);
                for(char ch:s){
                    chars[ans++]=ch;
                }
            }
            i=j;
        }
        return ans;
    }

int main(){

    return 0;
}