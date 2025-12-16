// Set is same as set in mathematics 
// It only contains unique values 

#include <iostream>
#include <vector>
#include <string>
#include <set>

using namespace std;

int main() {
    set<int> s;
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

    // It also have lower_bound and upper_bound
    // lower_bound means value should not be less than this
    // upper_bound means value should not be less than or equal to this
    // lower_bound(x) : give the iterator to that value which should be dereferenced (using * operator)
    // if that value doesn't exist it returns the value just greater than that no.(x)
    // if that no. doesn't exist and no no. is greater than that it returns end()
    cout << "lower bound: " << *(s.lower_bound(4)) << endl;
    s.erase(4);
    cout << "lower bound: " << *(s.lower_bound(4)) << endl;

    s.insert(4);

    for(auto val : s)
    {
        cout << val << " ";
    }
    cout << endl;    
    // upper bound
    cout << "upper bound: " << *(s.upper_bound(2)) << endl;
    cout << "upper bound: " << *(s.upper_bound(5)) << endl;
    

}
// Fns like insert,emplace,size,empty,count,find,erase works in set
// And time complexity for these fns is O(log n) cause set is stored in memory in the form of 
// self balancing tree, just like map.