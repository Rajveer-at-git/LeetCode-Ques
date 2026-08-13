# include<iostream>
using namespace std;
int main()
{
    for(int a=0;a<5;a++)
    {
        for(int i=0;i<5-(a+1);i++)
        {
            cout << " ";
        }
        for(int j=0;j< 2*a+1;j++)
        {
            cout << "*";
        }
        for(int k=0;k<5-(a+1);k++)
        {
            cout << " ";
        }
        cout << endl;
    }

    for(int a=0;a<5;a++)
    {
        for(int i=0;i<a;i++)
        {
            cout << " ";
        }
        for(int j=0;j<9-2*a;j++)
        {
            cout << "*";
        }
        for(int k=0;k<=a;k++)
        {
            cout << " ";
        }
        cout << endl;
    }


}