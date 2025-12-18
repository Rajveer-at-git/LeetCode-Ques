// In this map it doesn't change the order into ascending order like that of in map 
// The order is random. 
// The keys cannot be duplicate
// Comparison: 
// Unordered map is the most frequently used map, cause operations like insert,erase,count have O(1)
// time complexity which is faster than Map which have O(log n) time complexity
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
    unordered_map<string,int> um;
    um.emplace("Fridge",20);
    um.emplace("Cooler",40);
    um.emplace("Fan",80);
    um.emplace("Laptop",50);

    for(auto temp : um)
    {
        cout << temp.first << " " << temp.second << endl;
    }
    cout << endl;
}