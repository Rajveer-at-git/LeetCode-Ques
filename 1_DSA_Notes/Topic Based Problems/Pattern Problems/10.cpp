#include <iostream>
#include <string>

using namespace std;

int main() {
    for(int i=0;i<5;i++)
    {
        cout << string(i+1, '*') << "\n";
    }

    for (int j=4;j>0;j--)
    {
        cout << string(j, '*') << "\n";
    }
    return 0;
}