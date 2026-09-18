#include <iostream>
using namespace std;

int main()
{

    for(int i=0;i<5;i++)
    {
        char num=64;
        for(int j=0;j<=i;j++)
        {
            num++;
            cout << num;
        }
        cout << "\n";
    }
}