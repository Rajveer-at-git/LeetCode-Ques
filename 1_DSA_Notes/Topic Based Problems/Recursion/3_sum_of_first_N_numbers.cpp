#include <bits/stdc++.h>
using namespace std;

int sum_of_num(int n)
{
    if(n == 1)
        return 1;
    
    return n + sum_of_num(n-1);
}

int main()
{
    int n = 100;
    int sum = sum_of_num(n);
    cout << "Sum of " << n << " : " << sum << endl;
}