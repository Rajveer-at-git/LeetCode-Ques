#include <iostream>
using namespace std;

int main()
{

    for(int i=0;i<5;i++)
    {
        char num=64;
        for(int j=0;j<=5-(i+1);j++)
        {
            num++;
            cout << num;
        }
        cout << "\n";
    }
}