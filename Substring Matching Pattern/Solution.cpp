#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s = "tokk";
    string p = "t*t";  

    int star = p.find('*');
    string prestar = p.substr(0,star);
    string poststar = p.substr(star+1,p.size()-1);
    string non_star = p.erase(star,1);
    cout << prestar << endl << poststar << endl << non_star << endl;

    if(s.find(non_star) != string::npos)
    {
        cout << true;
        return 0;
    }

    if(prestar != "")
    {
        if(s.find(prestar) != string::npos);
        else {cout << false; return 0;}
    }

    if(poststar != "" && p.find(poststar) > p.find(prestar))
    {
        if(s.find(poststar) != string::npos);
        else 
        {
            cout << false;
            return 0;
        }
    }

    if(prestar.find(poststar))
    {
        int new_p = s.find(prestar)+1;
        if(s.find(poststar,new_p) != string::npos);
        else {cout << false; return 0;}
    }

    if(prestar != "" && poststar != "")
    {
        int new_p = s.size() - poststar.length();
        if(s.find(poststar,new_p) != string::npos);
        else {cout << false; return 0;}
        return 0;
    }

    cout << true;
}
