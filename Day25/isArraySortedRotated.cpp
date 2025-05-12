#include <iostream>
#include <vector>
using namespace std;
bool check(vector<int> &nums)
{
    int count = 0;
    int n = nums.size() - 1;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] > nums[i])
        {
            count++;
        }
    }
    if (nums[n] > nums[0])
        count++;

    return count <= 1;
}

int main()
{
    vector<int> nums = {3,4,5,1,2};
    if (check(nums))
    {
        cout << "Array is sorted and rotated" << endl;
    }
    else
    {
        cout << "Array is not sorted and rotated" << endl;
    }
    return 0;
}