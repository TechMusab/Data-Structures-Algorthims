#include <iostream>
#include <vector>
using namespace std;

vector<int> findDuplicates(vector<int> &nums)
{
    int index;
    vector<int> dup;
    for (int i = 0; i < nums.size(); i++)
    {
        index = abs(nums[i]) - 1;
        if (nums[index] < 0)
        {
            dup.push_back(abs(nums[i]));
        }
        else
        {
            nums[index] = nums[index] * -1;
        }
    }
    return dup;
}
int main()
{

    return 0;
}