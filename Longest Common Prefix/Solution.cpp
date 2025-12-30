class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
    string prefix = strs[0];
    if(strs.empty()) return "";
    for(int b=1;b<strs.size();b++)
    {
        string current_word = strs[b];
        int a=0;
        while(a<prefix.length() && a<current_word.length())
        {
            if(prefix[a] == current_word[a])
                a++;
            else
                break;
        };
        prefix = prefix.substr(0,a);
        if (prefix == "")
            break;
    }
        return prefix;
}
};
