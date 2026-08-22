#include <bits/stdc++.h>
using namespace std;

bool arm_strong_number(int n)
{
    int duplicate = n;
    int power = log10(n) + 1;
    int arm_n = 0;
    while(n != 0)
    {
        int num = n%10;
        n /= 10;
        arm_n = arm_n + round(pow(num, power));
    }
    if(arm_n == duplicate)
        return true;
    else
        return false;
}

int main()
{
    int n=123;
    bool arm_n =  arm_strong_number(n);
    if(arm_n)
        cout << n << " is an Armstrong Number.\n";
    else   
        cout << n << " is NOT an Armstrong Number.\n";
}