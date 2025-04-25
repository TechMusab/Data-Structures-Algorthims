#include <iostream>
#include <vector>
using namespace std;

int findDuplicateXOR(const vector<int>& nums) {
    int xorArr = 0;
    int xorRange = 0;
    int n = nums.size(); 

    for (int i = 0; i < n; i++) {
        xorArr ^= nums[i];
    }

    for (int i = 1; i < n; i++) {
        xorRange ^= i;
    }

    return xorArr ^ xorRange;
}

int main() {
    vector<int> nums = {1, 2, 3, 4, 2};
    cout << "Duplicate number is: " << findDuplicateXOR(nums) << endl;
    return 0;
}
