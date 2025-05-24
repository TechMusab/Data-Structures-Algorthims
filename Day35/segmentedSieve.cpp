#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

vector<int> getBasePrimes(int limit)
{
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;
    vector<int> primes;
    for (int i = 2; i <= limit; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            for (int j = i * i; j <= limit; j += i)
            {
                isPrime[j] = false;
            }
        }
    }
    return primes;
}

void segmentedSieve(int L, int R)
{

    vector<int> basePrimes = getBasePrimes(sqrt(R));
    int size = R - L + 1;
    vector<bool> vec(size, true);
    if (L == 1)
    {
        vec[0] = false;
    }

    for (int p : basePrimes)
    {

        int start = max(p * p, ((L + p - 1) / p) * p);

        int j = start;
        while (j <= R)
        {
            vec[j - L] = false;
            j += p;
        }
    }
    for (int i = 0; i < size; i++)
    {
        if (vec[i])
        {
            cout << L + i << " ";
        }
    }
}
int main()
{

    int L, R;
    cout << "Enter the range (L R): ";
    cin >> L >> R;

    segmentedSieve(L, R);
    return 0;
}
