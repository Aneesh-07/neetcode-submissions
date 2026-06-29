class Solution {
public:

    string encode(vector<string>& strs) {
        string s ="";
        for(auto i:strs){
            s+= to_string(i.size())+'#'+i;
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string>ans;

        for(int i=0;i<s.size();i++){
            // int j=i;
            string num = "";
            string temp_ans ="";
            while(s[i] !='#'){
                num+=s[i];
                i++;
            } 
            int len = stoi(num);
            i++;
            // int end = i + len;
            while(len){
                temp_ans += s[i];
                i++;
                len--;
            }
            i--;
            ans.push_back(temp_ans);
        }

        return ans;
    }
};