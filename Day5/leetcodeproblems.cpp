// Problem 1: Reverse integer
#include <iostream>
#include <climits> 
using namespace std;
int reverseinteger(int i)
{
    int ans = 0;
    while (i != 0)
    {
        //normal case
        int digit = i % 10;
        ans = (ans * 10) + digit;
        //special case
        if(ans<INT_MIN/10 || ans>INT_MAX/10){
            return 0;
        }
        i = i / 10;
    }
    return ans;
}
int main()
{

    cout<<reverseinteger(123443);

    return 0;
}