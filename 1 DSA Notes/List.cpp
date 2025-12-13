// In list we can 
// push_back()
// push_front()
// emplace_back() and emplace_front() also works
// pop_back()
// pop_front()
// And all other functions like size,erase,clear,insert,begin,end,rbegin,rend,front,back which works in 
// vector also works in list
// In memory list is implemented by linked list
// deque and list have same 
#include <iostream>
#include <vector>
#include <string>
#include <list>

using namespace std;

int main() {
    list<int> l;
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);
    l.push_front(2);
    l.push_front(1);

    for(int val:l)
    {
        cout << val << " ";
    }
    cout << endl;
}