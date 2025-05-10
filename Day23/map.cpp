#include <iostream>
#include <map>
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
    return 0;
}