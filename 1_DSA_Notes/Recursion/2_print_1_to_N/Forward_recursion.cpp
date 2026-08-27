#include <bits/stdc++.h>
using namespace std;

void recurse(int num, int till)
{
    if(num > till)
        return;

    cout << num << " ";
    recurse(++num, till);
}

int main()
{
    int n = 10;
    recurse(1, n);
}