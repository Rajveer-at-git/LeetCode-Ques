#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string str0 = "Goku";
    char c1 = str0[0];      // 'G'
    char c2 = str0.at(3);   // 'u'
    cout << c1 << " " << c2 << endl;

    // To take Substring
    string str = "Calisthenics";
    string sub = str.substr(0, 4); // Result: "Cali"
    cout << sub << endl;
    // To find something 
    cout << str.find('l') << endl;

    // To insert things in string
    string str2 = "";
    str2 += 'R';          // Now str is "R"
    cout << str2 << endl;
    str2.push_back('A');   // Now str is "RA"
    cout << str2 << endl;

    string str3 = "Raveer";
    // insert(index, number_of_chars, character)
    str3.insert(2, 1, 'j'); 
    cout << str3 << endl;
    str3.insert(7,2,'!');
    cout << str3 << endl;

    // Comparing Strings
    string a = "Vegeta";
    string b = "Goku";

    if (a > b) 
    { 
        cout << "Vegeta comes after Goku in the dictionary!" << endl; // lexicographical order
    }

    // Finding Things
    string s = "The world is not enough";
    size_t found = s.find("world");

    if (found != string::npos) {        //
        cout << "Found 'world' at index: " << found << endl;
    }    

    // Erasing and clearing
    string s2 = "Hello World";
    s2.erase(0, 6); // Now s is "World"
    cout << s2 << endl;
    s2.pop_back();  // Now s is "Worl"
    cout << s2 << endl;

    // Swaping
    string s10 = "Naruto";
    string s20 = "Sasuke";
    s10.swap(s20); // Now s1 is "Sasuke"
    cout << s10 << " and " << s20 << endl;
 
    
}

