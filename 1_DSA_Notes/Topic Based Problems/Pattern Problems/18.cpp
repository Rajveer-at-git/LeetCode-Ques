#include <iostream>
using namespace std;

int main()
{
    int num=64;
    for(int i=5;i>0;i--)
    {
        for(int j=num+i;j<=69;j++)
        {
            cout << (char)j << " ";
        }
        cout << "\n";
    }
}