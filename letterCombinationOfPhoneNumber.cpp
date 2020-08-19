class Solution {
public:
    unordered_map<char, string> mp = {{'0', ""}, {'1', ""}, {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

    vector<string> printing(string digits){
        int len = digits.length();
        assert(len > 0);
        string str = mp[digits[0]];
        int l = str.length();
        vector<string> res;
        if(len == 1){
            for(int i = 0; i < l; ++i){
                res.push_back(string(1, str[i]));
            }
        } 
        else{
            vector<string> tmp = printing(digits.substr(1));
            int lvec = tmp.size();
            for(int i = 0; i < l; ++i){
                for(int j = 0; j < lvec; ++j){
                    res.push_back(str[i] + tmp[j]);
                }
            }
        }
        return res;
    }

    vector<string> letterCombinations(string digits) {
        int len = digits.length();
        vector<string> res;
        if(len == 0) return res;
        
        return res = printing(digits);
    }
};class Solution {
public:
    unordered_map<char, string> mp = {{'0', ""}, {'1', ""}, {'2', "abc"}, {'3', "def"}, {'4', "ghi"}, {'5', "jkl"}, {'6', "mno"}, {'7', "pqrs"}, {'8', "tuv"}, {'9', "wxyz"}};

    vector<string> printing(string digits){
        int len = digits.length();
        assert(len > 0);
        string str = mp[digits[0]];
        int l = str.length();
        vector<string> res;
        if(len == 1){
            for(int i = 0; i < l; ++i){
                res.push_back(string(1, str[i]));
            }
        } 
        else{
            vector<string> tmp = printing(digits.substr(1));
            int lvec = tmp.size();
            for(int i = 0; i < l; ++i){
                for(int j = 0; j < lvec; ++j){
                    res.push_back(str[i] + tmp[j]);
                }
            }
        }
        return res;
    }

    vector<string> letterCombinations(string digits) {
        int len = digits.length();
        vector<string> res;
        if(len == 0) return res;
        
        return res = printing(digits);
    }
};
