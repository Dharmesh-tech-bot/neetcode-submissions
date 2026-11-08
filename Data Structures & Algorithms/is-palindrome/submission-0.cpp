class Solution {
public:
    bool isPalindrome(string s) {
        //int len=s.length();
        string str;
        for(char &ch: s){
            if(ch>='A' && ch<='Z'){
                str.push_back(tolower(ch));
            }
            else if(ch>='a' && ch<='z'){
                str.push_back(ch);
            }
            else if(ch>='0' && ch<='9'){
                str.push_back(ch);
            }else{
                continue;
            }
        }
        
        int len=str.length();
        int i=0,j=len-1;
        while(i<j){

            if(str[i]!=str[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
        
    }
};
