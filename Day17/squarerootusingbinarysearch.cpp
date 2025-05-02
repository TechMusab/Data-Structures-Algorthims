#include <iostream>
using namespace std;

int sqaureroot(int n)
{
    int s = 0;
    int e = n;
    int ans;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid == n)
        {
            return mid;
        }
        else if (mid * mid > n)
        {
            e = mid - 1;
        }
        else
        {
            ans=mid;
            s = mid + 1;
        }
    }
    return ans;
}
double  periciseans(int n,int ans,int precision)
{
    double periciseans;
    double factor =1;
    for(int i=0;i<precision;i++){
        factor = factor /10;
        for(double j=ans;j*j<n;j+=factor){
            periciseans=j;
        }
    }
    return periciseans;
}

int main()
{

    int n = 17;
    int ans = sqaureroot(n);
    cout << "The square root of " << n << " is " << ans << endl;
    int precision = 3;
    double pericise = periciseans(n, ans, precision);
    cout << "The square root of " << n << " is " << pericise << endl;
    return 0;
}