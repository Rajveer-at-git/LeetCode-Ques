# include<iostream>
using namespace std;
int main()
{
    int times=1;
    for(int a=0;a<5;a++)
    {
        for(int i=0;i<5-times/2;i++)
        {
            cout << " ";
        }
        for(int j=0;j<times;j++)
        {
            cout << "*";
        }
        for(int k=0;k<5-times/2;k++)
        {
            cout << " ";
        }
        times = times+2;
        cout << endl;
    }

}