/*
Problem Statement:
Given an array of integers, find all triplets of elements that sum up to a given number n. The triplets should be returned in a 2D vector, where each triplet is represented as a vector of three integers. The triplets should be sorted in ascending order based on the first element of the triplet.
*/

#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> tripletsum(vector<int> &arr, int n)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == n)
                {
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<vector<int>> ans = tripletsum(arr, 10);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"Triplet Sum:" << ans[i][0] << " " << ans[i][1] << " " << ans[i][2] << endl;
    }

    return 0;
}