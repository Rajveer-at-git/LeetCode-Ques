#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s = "Rajveer";
    string p = "aj*er";

    int star = p.find('*');
        string prestar = p.substr(0,star);
        string poststar = p.substr(star+1,p.size()-1);
        if(prestar != "")
        {
            if(s.find(prestar) != string::npos);
            else return(false);
        }
        
        if(poststar != "" && p.find(poststar) > p.find(prestar))
        {
            if(s.find(poststar) != string::npos);
            else return(false);
        }

        return true;
}