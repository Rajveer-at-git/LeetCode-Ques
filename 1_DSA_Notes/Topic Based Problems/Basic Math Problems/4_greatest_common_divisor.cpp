// We have used Eucledian Algorithm here
// Eucledian Algo: 
// if we recursively substract the lower number from the greater number till one number becomes 
// zero, the remaining other number is the gcd of both numbers. 

#include <bits/stdc++.h>
using namespace std;

int GCD(int n1, int n2)
{
    while(n1!=0 && n2!=0)
    {
        if(n1>n2)
            n1 = n1%n2;
        else
            n2 = n2%n1;
    }

    if(n1)
        return n1;
    else
        return n2;
}

int main()
{
    int num1 = 100;
    int num2 = 3;
    
    cout << "Greatest Common Divisor: " << GCD(num1, num2) << endl;
}