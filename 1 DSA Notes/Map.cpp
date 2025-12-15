// Stores values in key-value pairs
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

    cout << "Value of TV : " << m["tv"] << endl;
    
    m.insert({"laptop",99});
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
} 