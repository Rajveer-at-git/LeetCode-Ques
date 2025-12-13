/*
Iterators are like pointers 
in, for(int i=0;i<n;i++), i is an iterator
begin(): tells the start of the vector
end(): tells the next location of the last element in vector usually a garbage or 0 value*/

// Note Iterators allows us to access memory directly 
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};
    vector<int>::iterator itr;
    for(itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout << *(itr) << " "; // itr is a pointer and *(itr) is the value at that location;
    }
    cout << endl;    
}