// Stores values in key-value pairs
// The key is always unique
// Map automatically sorts its contents in ascending order(i.e lexicographical order) based on their keys.
#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

int main() {
    map<string,int> m;

    m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 100;
    m["Washing Machine"] = 30;
    m["Android Smartphones"] = 10;
    
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    m.insert({"Smart Watch", 80});
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    cout << "Value of TV : " << m["tv"] << endl << endl;
    
    m["laptop"] = 99;
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    // erase(): for deleting a key
    m.erase("Android Smartphones");
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    // find(): for finding an element 
    // if the key is found it returns its iterator
    // if key not found, it returns the end() (the value next to the last value in the map usually garbage)
    if(m.find("tv") != m.end())
        cout << "found\n";
    else    
        cout << "not found\n";

    cout << "Size of map: " << m.size() << endl;
    cout << "is map empty: " << m.empty() << endl;

    cout << m.count("tv") << endl;
} 