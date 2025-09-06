class Solution {
public:
    string longestCommonPrefix(vector<string>& s) {
        if(s.empty()) return "";

        sort(s.begin(),s.end());
        string first = s[0];
        string last = s.back();

        string result="";

        int i=0;
        while(i<first.size() && i< last.size())
        {
            if(first[i]==last[i]){
                result += first[i];
                i++;
            }
            else {
                break;
            }
        } 
        return result ;       
    }
};
