#include <iostream>
using namespace std;

int main()
{
    int mid = 64;
    for(int i=0;i<4;i++)
    {
        for(int z=4-i;z>=0;z--)
            cout << " ";
        for(int a=65;a<i+65;a++)
        {
            cout << (char)a;
        }
        // Mid letter
        mid++;
        cout << (char)mid;
        for(int b=i+64;b>64;b--)
        {
            cout << (char)b;
        }
        cout << "\n";
    }
}