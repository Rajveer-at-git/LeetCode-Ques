# include<bits/stdc++.h>
using namespace std;

void CountFreq(int n)
{
    vector<int> nums(n, 0);
    cout << "Enter the elements: " << endl;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    vector<bool> status(n, false);
    for(int i=0;i<n;i++)
    {
        int cnt = 1;
        
        if(status[i] == true)
            continue;

        for(int j=i+1;j<n;j++)
        {            

            if(nums[j] == nums[i])
            {
                status[j] = true;
                cnt++;
            }
            
        }
        cout << nums[i] << " : " << cnt << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the value of n : ";
    cin >> n;
    CountFreq(n);
}