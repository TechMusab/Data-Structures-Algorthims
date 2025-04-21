
#include<iostream>
using namespace std;
int power(int a,int b){
    int result = 1;
    for(int i=0;i<b;i++){
        result *= a;
    }
    return result;
}
int fact(int n){
    int result = 1;
    for(int i=1;i<=n;i++){
        result *= i;
    }
    return result;
}
int nCr(int n,int r){
    int result = fact(n)/(fact(r)*fact(n-r));
    return result;
}


int main(){

    int n,r;
    cout << "Enter n and r" << endl;
    cin >> n >> r;
    cout << "nCr is " << nCr(n,r) << endl;
    
    return 0;
}
