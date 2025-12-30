// Multi_set can contain duplicate values

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {
multiset<int> s;
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

// 3. Deletion - O(log N)
// Be careful here! 
// ms.erase(2) will remove ALL instances of 2.
// To remove only ONE instance of 2, use an iterator:
auto it = ms.find(2);
if (it != ms.end()) {
    ms.erase(it); // Removes only one '2'
}

// 4. Search - O(log N)
if (ms.count(5)) {
    cout << "5 exists in the multiset" << endl;
}

// 5. Counting Elements - O(log N + count)
// Returns how many times an element appears
int frequency = ms.count(2); 

// 6. Range Operations (The "Pro" LeetCode tools)
// lower_bound: First element >= val
auto lb = ms.lower_bound(5); 

// upper_bound: First element > val
auto ub = ms.upper_bound(5); 

// 7. Size & Capacity
bool isEmpty = ms.empty();
int totalElements = ms.size();

// 8. Traversal (Printing)
for (int x : ms) {
    cout << x << " ";
}

// 9. Clearing - O(N)
ms.clear();

return 0;

}