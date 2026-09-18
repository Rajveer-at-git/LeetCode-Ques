#include <iostream>
using namespace std;

int main()
{
    for(int i=0;i<5;i++)
    {
        for(int a=5-i;a>0;a--)
        {
            cout << "*";
        }
        for(int b=0;b<i;b++)
        {
            cout << "  ";
        }
        for(int c=5-i;c>0;c--)
        {
            cout << "*";
        }
        cout << "\n";
    }
    for(int j=0;j<5;j++)
    {
        for(int x=0;x<=j;x++)
        {
            cout << "*";
        }
        for(int y=4-j;y>0;y--)
        {
            cout << "  ";
        }
        for(int z=0;z<=j;z++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}