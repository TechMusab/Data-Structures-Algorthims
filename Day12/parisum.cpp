/*
Problem Statement:
Given an array of integers, find all pairs of elements that sum up to a given number n. The pairs should be returned in a 2D vector, where each pair is represented as a vector of two integers. The pairs should be sorted in ascending order based on the first element of the pair.
*/
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> pairsum(vector<int> &arr, int n)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[i] + arr[j] == n)
            {
                vector<int> temp;
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    vector<vector<int>> ans = pairsum(arr, 5);
    for (int i = 0; i < ans.size(); i++)
    {
        cout<<"Pair Sum:" << ans[i][0] << " " << ans[i][1] << endl;
    }


    return 0;
}