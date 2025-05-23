#include <iostream>
#include<vector>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int countPrimes(int n)
{
    int count = 0;
    for (int i = 2; i < n; i++)
    {
        if (isPrime(i))
        {
            count++;
        }
    }
    return count;
}
// optimized approach
int countPrimes(int n)
{
    int count = 0;
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if (prime[i])
        {
            count++;
            int j = 2;
            while (j * i < n)
            {
                prime[j * i] = false;
                j += 1;
            }
        }
    }
    return count;
}

int main()
{
}