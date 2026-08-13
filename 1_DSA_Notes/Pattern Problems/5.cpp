# include<iostream>
using namespace  std;

int main() {
    int num = 5;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<num;j++)
        {
            cout << "*";
        }
        cout << "\n";
        num--;        
    }
}