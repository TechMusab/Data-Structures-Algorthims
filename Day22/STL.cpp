#include <iostream>
#include <array>
#include <vector>
#include<deque>
using namespace std;

int main()
{
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
    vector<int> v;
    cout << "Capacity:" << v.capacity() << endl;
    v.push_back(1);
    v.push_back(2);
    cout << "Capacity" << v.capacity() << endl;
    v.push_back(3);
    cout << "Capacity:" << v.capacity() << endl;
    cout << v.front() << endl;
    cout << v.back() << endl;
    v.pop_back();
    for (int i : v)
    {
        cout << i << " ";
    }
    v.clear();
    cout<<v.size()<<endl;

//Deque

    return 0;
}