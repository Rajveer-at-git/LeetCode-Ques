// Time complexity: O(1) usually (Unordered set and map are super optimized data structures) 
// Stored items will be in random order
// fns like 
// insert(x) : inserts element x  
// find(x) : returns the iterator to the element if the elementis present
// count(x) : return true if present else false
// erase(x) : returns 1 if x is present and then deletes it, if x is absent returns 0
// clear() : empties set
// are allowed
 
#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    s.insert(1);
    s.insert(2);
    s.insert(3);


    for(auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;

    cout << *(s.find(4)) << endl; // 4
    cout << s.count(4) << endl; // true or 1
    cout << s.erase(4) << endl;
    for(auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;
}

