#include <bits/stdc++.h>
using namespace std;

void recurse(int n, string name, int count)
{    
    if(count == n)
        return;

    cout << name << " ";
    recurse(n, name, ++count); // count++ will not work, as first it will send the value then increment
    // therefore, each time the fn only receives count=0 and causes stack overflow
}

int main()
{
    int n = 9;
    string name = "Shiv";
    recurse(n, name, 0);
}