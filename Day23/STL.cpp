#include <iostream>
#include <stack>
#include <queue>
#include <set>
using namespace std;

int main()
{
    // stack
    stack<string> s;
    s.push("Hello");
    s.push("World");
    s.push("!");
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
    cout << "Stack is empty: " << s.empty() << endl;
    cout << "Stack size: " << s.size() << endl;
    cout << "------------------------" << endl;
    // queue
    queue<string> q;
    q.push("Hello");
    q.push("World");
    q.push("!");
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    cout << "Queue is empty: " << q.empty() << endl;
    cout << "Queue size: " << q.size() << endl;
    cout << "------------------------" << endl;
    // pirority queue
    priority_queue<int> pq;
    pq.push(1);
    pq.push(2);
    pq.push(3);
    pq.push(9);
    pq.push(0);
    while (!pq.empty())
    {
        cout << pq.top() << endl;
        pq.pop();
    }
    cout << "Priority queue is empty: " << pq.empty() << endl;
    cout << "Priority queue size: " << pq.size() << endl;
    // min heap
    priority_queue<int, vector<int>, greater<int>> minHeap;
    minHeap.push(1);
    minHeap.push(2);
    minHeap.push(3);
    minHeap.push(9);
    minHeap.push(0);
    while (!minHeap.empty())
    {
        cout << minHeap.top() << endl;
        minHeap.pop();
    }
    cout << "Min heap is empty: " << minHeap.empty() << endl;
    cout << "Min heap size: " << minHeap.size() << endl;
    cout << "------------------------" << endl;
    // set
    set<int> s1;
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    s1.insert(3);
    s1.insert(0);
    for (auto i : s1)
    {
        cout << i << endl;
    }
    s1.erase(2);
    set<int>::iterator it = s1.begin();
    s1.erase(it);
    for (auto i : s1)
    {
        cout << i << endl;
    }
    cout << "Set is empty: " << s1.empty() << endl;
    cout << "Set size: " << s1.size() << endl;
    cout << "Set count of 2: " << s1.count(2) << endl;
    cout << "------------------------" << endl;
    return 0;
}