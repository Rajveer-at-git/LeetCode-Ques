#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s, int left, int right) {

    if(left < right) 
    {
        if (!isalnum(s[left])) 
            return isPalindrome(s, ++left, right);
        else if (!isalnum(s[right])) 
            return isPalindrome(s, left, --right);
        else if (tolower(s[left]) != tolower(s[right])) 
            return false;
        else
            return isPalindrome(s, ++left, --right);
    }
    return true;
}

int main() {
    string str = "ABCDCBA";
    int left = 0, right = str.length() - 1;
    bool ans = isPalindrome(str, left, right);

    // Output the result
    if (ans == true) {
        cout << "Palindrome\n";
    } else {
        cout << "Not Palindrome\n";
    }

    return 0;
}
