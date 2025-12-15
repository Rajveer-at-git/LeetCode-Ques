// In Multi-map we can have multiple keys i.e duplicate keys are allowed
// but since there are multiple keys in it we cannot use [] notation.
/*m["tv"] = 100;
    m["laptop"] = 50;
    m["headphones"] = 100;
    m["Washing Machine"] = 30;
    m["Android Smartphones"] = 10;
THESE ARE INVALID IN MULTI-MAPPING*/
// We rarely use Mutli_map in DSA 
#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main() {
    multimap<string,int> m; // try changing multimap to map only

    m.emplace("tv",10);
    m.emplace("tv",20);
    m.insert({"tv",30});
    m.insert({"tv",40});

    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;

    m.erase(m.find("tv"));
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
    
    m.erase("tv");
    for(auto p : m)
    {
        cout << p.first << " " << p.second << endl;
    }
    cout << endl;
}