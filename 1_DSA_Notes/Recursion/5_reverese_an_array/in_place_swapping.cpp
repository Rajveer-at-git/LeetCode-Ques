#include <bits/stdc++.h>
using namespace std;

void reverse_arr(vector<int> &arr)
{
    int n = arr.size();
    int ptr1 = 0;
    int ptr2 = n-1;

    while(ptr1<ptr2)
    {
        swap(arr[ptr1], arr[ptr2]);
        ptr1++;
        ptr2--;
    }

}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    reverse_arr(arr);
    for(int val : arr)
        cout << val << " ";
    cout << endl;
}