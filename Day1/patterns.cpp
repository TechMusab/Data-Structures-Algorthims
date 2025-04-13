#include<iostream>
using namespace std;

int main(){
int n;
cin>>n;

// int i=1;
// while (i<=n){
//     int j=1;
//     while (j<=n){
//         cout <<"* ";
//         j++;
//     }
//     cout<<endl;
//     i++;
// }
// int i=1;
//  while (i<=n){
//     int j=1;
//     while (j<=n){
//         cout << n-j+1 <<" " ;
//         j++;
//     }
//     cout<< endl ;
//     i++;
//  }
// int i=1;
// int  c=1;
//  while (i<=n){
//     int j=1;
//     while (j<=n){
//         cout << c <<" " ;
//         j++;
//         c++;
//     }
//     cout<< endl ;
//     i++;
//  }

// int i=1;
 
// while (i<=n){
//     int j=1;
//     while(j<=i){
//         cout << "*" << " ";
//         j++;
//     }
//     cout<<endl;
//     i++;

// }
// int i=1;
 
// while (i<=n){
//     int j=1;
//     while(j<=i){
//         cout << i << " ";
//         j++;
//     }
//     cout<<endl;
//     i++;

// }
// int i=1;
 
// while (i<=n){
//     int j=1;
//     while(j<=i){
//         cout << i+j-1 << " ";
//         j++;
//     }
//     cout<<endl;
//     i++;

// }
// int i=1;
 
// while (i<=n){
//     int j=1;
//     while(j<=n){
//         char ch = 'A' + j - 1;
//         cout << ch << " ";
//         j++;
//     }
//     cout<<endl;
//     i++;

// }
int i=1 ;
while (i<=n){

    int j=1;
    while (j<=n){
        char ch = 'A' + i +j -2;
        cout << ch << " ";
        j++;
    }
    cout <<endl;
    i++;
}
    return 0;
}