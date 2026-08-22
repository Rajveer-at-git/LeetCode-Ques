# include <bits/stdc++.h>
using namespace std;

int reverse_num(int num)
{
    int rev_num = 0;
    while(num > 0)
    {
        int lsd = num % 10;
        rev_num = rev_num*10+lsd;
        num = num/10;
    }
    return rev_num;
}

int main()  
{
    int n = 12345;
    int r_num = reverse_num(n);
    cout << "Reverse Number: " << r_num << endl;
}