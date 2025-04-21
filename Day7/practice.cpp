#include <iostream>
using namespace std;
int AP(int n)
{
    return (3 * n) + 7;
}
int setbits(int a, int b)
{
    int count = 0;
    while (a != 0)
    {
        int bit = a & 1;
        if (bit == 1)
        {
            count++;
        }
        a = a >> 1;
    }
    int count2 = 0;
    while (b != 0)
    {
        int bit = b & 1;
        if (bit == 1)
        {
            count2++;
        }
        b = b >> 1;
    }
    return count + count2;
}
void fibonacci(int n)
{
    int a = 0;
    int b = 1;
    cout<< a <<" " << b<< " ";
    for (int i = 1; i <= n; i++)
    {
        int ans = a + b;
        cout << ans <<" ";
        a = b;
        b = ans;
    }
}
int main()
{
    // int a, b;
    // cout << "Enter the bits:" << endl;
    // cin >> a >> b;

    // int bits = setbits(a, b);
    // cout << "Number of Set bits:" << bits << endl;
    fibonacci(20);
    return 0;
}