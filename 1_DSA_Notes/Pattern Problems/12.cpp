# include<iostream>
using namespace std;
int main()
{
    for(int i=0;i<4;i++)
    {
        for(int a=0;a<=i;a++)
        {
            cout << a+1;
        }
        for(int b=4-(i+1);b>=1;b--)
        {
            cout << "  ";
        }
        for(int c=i+1;c>0;c--)
        {
            cout << c;
        }
        cout << "\n";
    }
}