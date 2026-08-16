// Multi_set can contain duplicate values
// Arranges elements in ascending order

// It only contains unique values 
// fns like 
// insert(x) : inserts element x  
// find(x) : returns the iterator to the element if the element is present else returns end()
// count(x) : return true if present else false
// erase(x) : returns 1 if x is present and then deletes it, if x is absent returns 0
// clear() : empties set
// are allowed

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {
multiset<int> ms;
ms.insert(1);
ms.insert(2);
ms.insert(3);
ms.insert(4);
ms.insert(5);

ms.insert(1);
ms.insert(2);
ms.insert(3);


for(auto val : ms)
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
// lower_bound: First element >= val, first checks for = condition if not present then >
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