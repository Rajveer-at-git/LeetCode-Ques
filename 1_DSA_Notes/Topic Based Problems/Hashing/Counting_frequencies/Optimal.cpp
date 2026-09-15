# include<bits/stdc++.h>
using namespace std;

void FreqCount(int n, int arr[])
{
    unordered_map<int, int> map;

    for(int i=0;i<n;i++)
    {
        map[arr[i]]++;      // map[10]: will create a key 10(if it does not already exists)
                            // and will set its value to 0 and immediately increment it to 1.
    }

    for(auto x : map)
    {
        cout << x.first << " : " << x.second << endl;
    }
}

int main()
{
    int arr[] = {10, 20, 10, 20, 10, 15};
    int n = sizeof(arr) / sizeof(arr[0]);

    FreqCount(n, arr);
}