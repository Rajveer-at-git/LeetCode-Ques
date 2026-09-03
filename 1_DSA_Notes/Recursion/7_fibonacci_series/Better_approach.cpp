#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=6;
    int last_sec = 0;
    int last = 1;
    if(n==0)
        cout << 0 << endl;
    else
    {
        cout << last_sec << " " << last << " ";
        for(int i=2;i<n;i++)
        {
            int cur = last_sec + last;
            cout << cur << " ";
            last_sec = last;
            last = cur;
        }
    }
}