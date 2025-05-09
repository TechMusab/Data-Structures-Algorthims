#include <iostream>
#include <array>
#include <vector>
#include <deque>
using namespace std;

int main()
{
    //array
    array<int, 4> a = {1, 2, 3, 4};
    int size = a.size();
    // for (int i = 0; i < size; i++)
    // {
    //  cout<<a[i]<<endl;
    // }
    // //operations
    // cout<<a.at(2)<<endl;
    // cout<<a.front()<<endl;
    // cout<<a.back()<<endl;
    // cout<<a.empty()<<endl;

    // vectors
//     vector<int> v;
//     cout << "Capacity:" << v.capacity() << endl;
//     v.push_back(1);
//     v.push_back(2);
//     cout << "Capacity" << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Capacity:" << v.capacity() << endl;
//     cout << v.front() << endl;
//     cout << v.back() << endl;
//     v.pop_back();
//     for (int i : v)
//     {
//         cout << i << " ";
//     }
//     v.clear();
//     cout << v.size() << endl;

//     // Deque

//     deque<int> d;
//     d.push_back(1);
//     d.push_back(2);
//     d.push_back(3);
//     d.push_front(0);
//     d.push_front(-1);
//     for (int i : d)
//     {
//         cout << i << " ";
//     }
//     cout << endl;
//     cout << d.back() << endl;
//     cout << d.front() << endl;
//     // empty
//     cout << d.empty() << endl;
//     // size
//     cout << d.size() << endl;
//     d.erase(d.begin(), d.begin() + 2);
//    cout << d.size() << endl;

    return 0;
}