class Solution {
public:
    char findTheDifference(string s, string t) {
        int hash[26]={0};
        for(int i=0;i<s.size();i++)
        {
            hash[s[i]-'a']+=1;
        }
        for(int j=0;j<t.size();j++)
        {
            hash[t[j]-'a']-=1;
        }
        for(int i=0;i<26;i++)
        {
            if(hash[i]!=0)
            return i+'a';
        }
        return {};
    }
};