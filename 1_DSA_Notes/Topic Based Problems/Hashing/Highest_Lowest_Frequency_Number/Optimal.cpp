#include <bits/stdc++.h>
using namespace std;

class HighLowF
{
public:
    void Frequency(int arr[], int n)
    {
        unordered_map<int, int> ump;
        // Count frequencies of all elements
        for (int i = 0; i < n; i++)
            ump[arr[i]]++;
        
        int maxFreq = 0, minFreq = n;
        int maxEle = 0, minEle = 0; 

        for(auto it : ump)
        {
            int elem = it.first;
            int count = it.second;

            if(count > maxFreq)
            {
                maxFreq = count;
                maxEle = elem;
            }

            if(count < minFreq)
            {
                minFreq = count;
                minEle = elem;
            }
        }
        cout << "Highest Frequency Element: " << maxEle << endl;
        cout << "Lowest Frequency Element: " << minEle << endl;
    }
};

int main()
{
    HighLowF obj;
    int arr[] = {10, 15, 10, 15, 20, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    obj.Frequency(arr, n);
}