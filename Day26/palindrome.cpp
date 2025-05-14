#include <iostream>
using namespace std;

char toLowercase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool isPalindrome(char str[], int n)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        // ignoring special charaters spaces
        if (!((str[s] >= 'a' && str[s] <= 'z') || (str[s] >= 'A' && str[s] <= 'Z')))
        {
            s++;
        }
        else if (!((str[e] >= 'a' && str[e] <= 'z') || (str[e] >= 'A' && str[e] <= 'Z')))
        {
            e--;
        }
        else if (toLowercase(str[s]) != toLowercase(str[e]))
        {
            return false;
        }
        else
        {

            s++;
            e--;
        }
    }
    return true;
}

int main()
{
    char ch[100]="n$%a@^n";
    int i = 0;
    while (ch[i] != '\0')
    {
        i++;
    }
    if (isPalindrome(ch, i))
    {
        cout << "The string is a palindrome." << endl;
    }
    else
    {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}