class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> alpha(26,0);
        if(s.length() != t.length()){
            return false;
        }

        for(int i=0; i<s.length(); i++){
            alpha[s[i]-'a']++;
            alpha[t[i]-'a']--;
        }

        for(int i=0; i<26; i++){
            if(alpha[i] != 0){
                return false;
            }
        }
        return true;
    }
};
