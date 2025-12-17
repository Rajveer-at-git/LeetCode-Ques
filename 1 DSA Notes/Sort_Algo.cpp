// Sort uses Introsort sorting algorithm for sorting, it is a hybrid of #QuickSort #InsertionSort #HeapSort 
#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // This library should be include for sort
using namespace std;

int main() {
    vector<int> vec = {6,9,2,3,1,7,10};
    sort(vec.begin(),vec.end());
// sort(vec.begin(), vec.begin()+7); <-- This is the same as above line
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl;

    // for sorting in reverse order (descending order)
    sort(vec.begin(),vec.end(),greater<int>());
    for(int val : vec)
    {
        cout << val << " ";
    }
    cout << endl << endl;

    // or
    vector<pair<int,int>> vect = {{9,1},{6,12},{1,2},{7,3},{5,5}};
    sort(vect.begin(),vect.end());  // This sorting is done on the basis of Key

    for(pair val : vect)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;
    
    // If we want to build our own custom logic like sorting on the basis of Value in key-value pair then
    // we have to create custom comparator
    // A comparator is a boolean function which returns a boolean value
    sort(vect.begin(), vect.end(), [](pair<int,int> a, pair<int,int> b){
        if(a.second < b.second)     // These square braces are called Lambda and this fn is Lambda fn
            return true;            // It is the fastest comparator method
        else if (a.second > b.second)
            return false;
        else        // Equals to condition
        {
            if(a.first > b.first)
                return true;
            else
                return false;
        }
    });

    for(pair val : vect)
    {
        cout << val.first << " " << val.second << endl;
    }
    cout << endl;

}

