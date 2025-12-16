// Time complexity: O(1) usually (Unordered set and map are super optimized data structures) 
// Stored items will be in random order
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
}