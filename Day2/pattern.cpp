#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of rows:" << endl;
    cin >> n;
    // int i = 1;
    // while (i <= n)
    // {
    //    int space = n - i;
    //     while (space)
    //     {
    //         cout<<" ";
    //         space--;
    //     }
    //     int j=1;
    //     while(j<=i){
    //         cout<<j;
    //         j++;
    //     }
    //     // 2nd trainge
    //     int start=i-1;
    //     while(start){
    //         cout<<start;
    //         start--;
    //     }

    //     cout<<endl;
    //     i++;
    // }

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << j;
            j++;
        }
        int star = (i - 1) * 2;
        while (star)
        {
            cout << "*";
            star--;
        }

        int val = n - i + 1;
        while (val)
        {
            cout << val;
            val--;
        }
        i++;
        cout << endl;
    }
    return 0;
}