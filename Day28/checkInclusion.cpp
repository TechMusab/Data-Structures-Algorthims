#include <iostream>
using namespace std;

bool checkEqual(int count[26], int count1[26])
{
    for (int i = 0; i < 26; i++)
    {
        if (count[i] != count1[i])
        {
            return 0;
        }
    }
    return 1;
}

bool checkInclusion(string s1, string s2)
{
    int count[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        int index = s1[i] - 'a';
        count[index]++;
    }

    // checking for first window
    int windowSize = s1.length();
    int count1[26] = {0};
    int i = 0;
    while (i < windowSize && i < s2.length())
    {
        int index = s2[i] - 'a';
        count1[index]++;
        i++;
    }
    if (checkEqual(count, count1))
    {
        return 1;
    }
    // if not equal proceed with next window

    while (i < s2.length())
    {
        int newchar = s2[i] - 'a';
        count1[newchar]++;
        int oldchar = s2[i - windowSize] - 'a';
        count1[oldchar]--;
        i++;
        if (checkEqual(count, count1))
        {
            return 1;
        }
    }
    return 0;
}

int main()
{

    return 0;
}
