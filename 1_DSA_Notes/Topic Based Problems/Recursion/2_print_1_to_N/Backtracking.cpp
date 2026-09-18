#include <bits/stdc++.h>
using namespace std;

void recurse(int current, int n)
{
    if(current >= n)
        return;

    recurse(++current, n);

    cout << current << " ";

}

int main()
{
    int n = 10;
    recurse(0, n);
    cout << endl ;
}