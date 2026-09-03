#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 6;
    vector<int> fib(n);
    fib[0] = 0;
    fib[1] = 1;
    if(n==0)
        cout << 0;
    else if(n==1)
        cout << 1;
    else
    {
    for(int i=2;i<n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }
    for(auto val : fib)
        cout << val << " ";
    cout << endl;        
    }

}