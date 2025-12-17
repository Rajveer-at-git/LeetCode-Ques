#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    cout << "Min: " << min(5,6) << endl;
    cout << "Max: " << max(8,5) << endl;

    int a=5 , b=10;
    swap(a,b);
    cout << "a: " << a << endl << "b: " << b << endl << endl;

    // Max/Min element present in the vector
    vector<int> vec = {1,2,3,4,5};
    cout << *(max_element(vec.begin(),vec.end())) << endl;
    cout << *(min_element(vec.begin(),vec.end())) << endl << endl;

    // Binary Search
    // format: binary_search(vec.begin(),vec.end(),Target) 
    // It returns true for target being present and false for absent
    cout << binary_search(vec.begin(),vec.end(),3) << endl;
    cout << binary_search(vec.begin(),vec.end(),10) << endl << endl;

    // To count the no. of 1s stored for a no.
    // For Ex: 15 == 1111(in binary)
    int n = 15;
    cout << __builtin_popcount(n) << endl; // for int variable
    long int o = 15;
    cout << __builtin_popcountl(o) << endl; // for long int variable
    long long int p = 15;
    cout << __builtin_popcount(p) << endl; // for long long int variable
    
    
}