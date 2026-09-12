#include <bits/stdc++.h>
using namespace std;

class Solution {
    public: 
        vector<int> num_divs(int n)
        {  
            vector<int> divs;
            for(int i=1; i*i<=n; i++)
            {
                if(n%i == 0)
                {
                    divs.push_back(i);
                    
                    if(i != n/i)
                        divs.push_back(n/i);
                }
            }
            return divs;
        }
};

int main()
{
    Solution sol;
    int n = 10;
    vector<int> divisors = sol.num_divs(n);
    cout << "Divisors of " << n << " : ";
    for(int val : divisors)
    {
        cout << val << " ";
    }
    cout << endl;
}