#include <iostream>
using namespace std;

int main()
{
    // int n=1;
    // switch (n)
    // {
    // case 1:
    //     cout << "1";
    //     break;
    // case 2:
    //     cout << "2";
    //     break;
    // default:
    //     break;
    // }
    // return 0;
    // Problem 1
    int n;
    cout << "Enter Amount" << endl;
    cin >> n;
    int i = 1;
    int h = 0;
    int f = 0;
    int t = 0;
    int o = 0;

    switch (i)
    {
    case 1:
        h = n / 100;
        n = n - (h * 100);
    case 2:
        f = n / 50;
        n = n - (f * 50);
    case 3:
        t = n / 20;
        n = n - (t * 20);
    case 4:
        o = n / 1;
        n = n - (o * 1);
        break;
    default:
        cout << "Invalid Amount" << endl;
        break;
    }
    cout << "You need " << h << " Hundred notes " << endl;
    cout << "You need " << f << " Fifty notes " << endl;
    cout << "You need " << t << " Twenty notes " << endl;
    cout << "You need " << o << " One notes " << endl;
}
