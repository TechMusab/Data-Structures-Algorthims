#include <iostream>
#include <vector>
using namespace std;

vector<int> reverse(vector<int> ans)
{
    int s = 0;
    int e = ans.size() - 1;
    while (s <= e)
    {
        swap(ans[s], ans[e]);
        s++;
        e--;
    }
    return ans;
}
vector<int> sumArrays(vector<int> a1, int n, vector<int> a2, int m)
{
    int i = n - 1;
    int j = m - 1;
    int carry = 0;
    vector<int> ans;
    while (i >= 0 && j >= 0)
    {
        int sum = a1[i] + a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
        j--;
    }
    // 1st case
    while (i >= 0)
    {
        int sum = a1[i] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        i--;
    }
    // 2nd case
    while (j >= 0)
    {
        int sum = a2[j] + carry;
        carry = sum / 10;
        sum = sum % 10;
        ans.push_back(sum);
        j--;
    }
    // 3rd case
    if (carry != 0)
    {
        ans.push_back(carry);
    }
    return reverse(ans);
}

int main()
{
    vector<int> a1 = {1,1,1};
    vector<int> a2 = {9,9,9};
    vector<int> ans = sumArrays(a1, a1.size(), a2, a2.size());
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}