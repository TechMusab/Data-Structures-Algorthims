#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool isPossible(vector<int> &stalls, int k, int mid)
{
    int cow = 1;
    int lastpos = stalls[0];
    for (int i = 0; i < stalls.size(); i++)
    {
        if (stalls[i] - lastpos >= mid)
        {
            cow++;
            if (cow == k)
            {
                return true;
            }
            lastpos = stalls[i];
        }
    }
    return false;
}

int aggresivecows(vector<int> &stalls, int k)
{
    sort(stalls.begin(), stalls.end());
    int s = 0;
    int maxi = -1;
    int ans = -1;
    for (int i = 0; i < stalls.size(); i++)
    {
        maxi = max(maxi, stalls[i]);
    }
    int e = maxi;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(stalls, k, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{
    vector<int> stalls = {1, 2, 4, 5, 5, 7};
    int k = 3;
    cout << "Largest minimum distance: " << aggresivecows(stalls, k) << endl;
    return 0;

    return 0;
}