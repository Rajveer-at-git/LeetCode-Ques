#include <iostream>
using namespace std;

int main()
{
    char num=64;
    for(int i=0;i<5;i++)
    {
        num++;
        for(int j=0;j<=i;j++)
        {
            cout << num;
        }
        cout << "\n";
    }
}