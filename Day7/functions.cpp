
#include <iostream>
using namespace std;
int power(int a, int b)
{
    int result = 1;
    for (int i = 0; i < b; i++)
    {
        result *= a;
    }
    return result;
}
int fact(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    return result;
}
int nCr(int n, int r)
{
    int result = fact(n) / (fact(r) * fact(n - r));
    return result;
}
bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    // int n, r;
    // cout << "Enter n and r" << endl;
    // cin >> n >> r;
    // cout << "nCr is " << nCr(n, r) << endl;
    int number;
    cout << "Enter the Number" << endl;
    cin >> number;
    if (isPrime(number))
    {
        cout << number << " is a prime number" << endl;
    }
    else
    {
        cout << number << " is not a prime number" << endl;
    }

    return 0;
}
