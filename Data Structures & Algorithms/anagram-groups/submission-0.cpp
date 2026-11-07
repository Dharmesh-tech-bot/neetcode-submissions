class Solution {
public:
string generate(string &s){
    vector<int> count(26,0);
    for(int i=0; i<s.length(); i++){
        count[s[i]-'a']++;
    }
     
    string word="";
    for(int i=0; i<26; i++){
        if(count[i]>0)
       word += (string(count[i],i+'a'));
    }

    return word;
}

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();

        unordered_map<string,vector<string>> mp;

        vector<vector<string>> result;

        for(int i=0; i<n; i++){
            string word=strs[i];

            string newword=generate(word);

            mp[newword].push_back(word);

        }

        for(auto &it: mp){
            result.push_back(it.second);
        }
     return result;
    }
};
