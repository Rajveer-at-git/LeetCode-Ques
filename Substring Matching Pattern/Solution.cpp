#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s = "ckckkk";
    string p = "ck*kc";

    int star = p.find('*');
        string prestar = p.substr(0,star);
        string poststar = p.substr(star+1,p.size()-1);
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
        cout << prestar << endl << poststar << endl;
        if(prestar != "" && poststar != "" && prestar.find(poststar) != string::npos)
        {
            int new_p = s.size() - poststar.length();
            if(s.find(poststar,new_p) != string::npos);
            else {cout << false; return 0;}
            return 0;
        }


        cout << true;
}