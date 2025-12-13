#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<int>::reverse_iterator itr;
    for(itr = vec.rbegin(); itr != vec.rend(); itr++){
        cout << *(itr) << " ";
    }
    cout << endl;
}