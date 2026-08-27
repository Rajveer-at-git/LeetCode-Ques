#include <bits/stdc++.h>
using namespace std;

void recurse(int current, int n)
{
    if(current <= n)
        return;

    recurse(--current, n);

    cout << current << " ";

}

int main()
{
    int n = 1;
    recurse(10, n);
    cout << endl ;
}