#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // map
    map<string, int> m;
    m["Hello"] = 1;
    m["World"] = 2;
    m["!"] = 3;
    m.insert(make_pair("four", 4));

    // iterate through map
    for (auto it = m.begin(); it != m.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    // finding Hello
    cout << m.count("Hello") << endl;
    m.erase("Hello");
    cout << m.count("Hello") << endl;

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout << "Binary search" << endl;
    cout << binary_search(v.begin(), v.end(), 3) << endl;
    cout<<upper_bound(v.begin(), v.end(), 3) - v.begin() << endl;
    cout<<lower_bound(v.begin(), v.end(), 5) - v.begin() <<endl;
    int a=5;
    int b=2;
    cout<<max(a,b)<<endl;
    cout<<min(a,b)<<endl;

    string s="Hello";
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}