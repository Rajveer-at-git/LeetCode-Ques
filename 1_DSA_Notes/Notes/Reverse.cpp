#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    reverse(vec.begin(),vec.end());
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // we can also reverse the values for some range 
    vector<int> vect = {1,2,3,4,5};

    reverse(vect.begin()+1,vect.begin()+3);
    for(int val : vect)
    {
        cout << val << " ";
    }
    cout << endl;
}