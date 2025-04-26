/*
Problem Statement:
Given two arrays, find the intersection of the two arrays. The intersection is the set of elements that are common to both arrays.
Arrays are sorted in non decreasing order
*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> intersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    /*
    Approach 1(Brute Force)
    for (int i = 0; i < n; i++)
    {
        int element = arr1[i];
        for (int j = 0; j < m; j++)
        {
            if (element < arr2[j])
            {
                break;
            }
            if (element == arr2[j])
            {
                ans.push_back(element);
                arr2[j] = -1;
                break;
            }
        }
    }*/


    // Optimzed approach
    int i=0, j=0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> arr1 = {1, 2, 3, 4, 3};
    vector<int> arr2 = {2, 2, 3, 4};
    int n = arr1.size();
    int m = arr2.size();
    vector<int> ans = intersection(arr1, n, arr2, m);
    cout << "Intersection of the two arrays is: ";
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }

    return 0;
}