// used to store elements in pair
#include <iostream>
#include <vector>
#include <string>
 
using namespace std;

int main() {
    pair<int,int> p = {1,3};
    pair<int,char> q = {1,'a'};

    cout << p.first << " : " << p.second << endl;
    cout << q.first << " : " << q.second << endl;

    // we can nest pair in pair
    pair<int,pair<char,string>> r = {1,{'a',"Rajveer"}};
    cout << r.first << " : " << r.second.first << "," << r.second.second << endl << endl;

    // we can use pair any where as we use other primitive datatypes
    vector<pair<int,int>> vec = {{1,2},{3,4},{5,6},{7,8}};

    vec.push_back({9,10});
    vec.emplace_back(11,12);
    
    for(pair<int,int> p : vec)
    {
        cout << p.first << " " << p.second << endl;
    }
    

}