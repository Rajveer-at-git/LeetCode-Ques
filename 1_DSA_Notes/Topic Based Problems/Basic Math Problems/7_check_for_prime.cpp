#include <bits/stdc++.h>
using namespace std;

class Solution
{
    public:
        bool prime_num(int n)
        {
            // int count = 0;
                int count = 0;
                for(int i=1;i<=sqrt(n);i++)
                {
                    if(n%i == 0)
                    {
                        count++;
                        if(n/i != i)
                            count++;
                    }
                    if(count > 2)
                        return false;
                }
                    return true;

        }
};

int main()
{
    Solution sol;
    int n = 19;
    bool prime = sol.prime_num(n);
    if (prime)
        cout << n << " is prime." << endl;
    else
        cout << n << " is composite." << endl;
}