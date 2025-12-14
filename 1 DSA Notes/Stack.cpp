#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout << "Stack Top: " << s.top() << endl;

    while(!s.empty())
    {
        cout << s.top() << " " << endl;
        s.pop();
    }
    cout << endl;

    s.push(1);
    s.push(2);
    s.push(3);

    stack<int> s2;
    s2.swap(s);     // Swap fn swaps the contents of two stacks 
    cout << "Stack2 Top: " << s2.top() << endl;
    cout << "Stack2 Size: " << s2.size() << endl;
    cout << "is Stack1 Empty: " << s.empty() << endl;
}