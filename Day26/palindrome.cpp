#include <iostream>
using namespace std;
bool isPalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

int main()
{
    char ch[10];
    cout << "Enter a string: ";
    cin >> ch;
    int count = 0;
    int i = 0;
    while (ch[i] != '\0')
    {
        count++;
        i++;
    }
    if (isPalindrome(ch, count))
    {
        cout << "The string is a palindrome." << endl;
    }
    else{
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}