class Solution {
public:

    string encode(vector<string>& strs) {
    string en="";
    for(auto &s:strs){
        en+=to_string(s.size())+'#'+s;
    }

    return en;
    }

    vector<string> decode(string s) {
        vector<string> result;
        int i=0;
        while(i<s.size()){
        int len=0;
        while(s[i] != '#'){
            len=len*10+(s[i]-'0');
            i++;
        }
        i++;
    result.push_back(s.substr(i,len));
    i+=len;
        }
    return result;
    }
};
