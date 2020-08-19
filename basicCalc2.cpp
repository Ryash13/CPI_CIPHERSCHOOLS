#define pii pair<int, int>
#define ll long long


class Solution {
    bool is_sign (char c) {
        return c == '+' || c == '*' || c == '-' || c == '/';
    }
public:
    ll calculate(string s) {
        vector<ll> stack;
        s += '+';
        ll cur = 0, sign = 1, sum = 0;
        
        for(int i = 0; i < s.size(); i++) {
            char c = s[i];
            if(c == ' ') continue;
            if(isdigit(c)) {
                cur = 10*cur + (c - '0');
            } else if(c == '-' || c == '+') {
                if(cur) sum += cur*sign;
                cur = 0;
                sign = c == '+' ? 1 : -1;
            } else {
                ll j = i + 1, div = 0; // assumes the string is valid
                while(j < s.size() && !is_sign(s[j])){
                    if(s[j] != ' ') div = div*10 + (s[j] - '0');
                    j++;
                }
                ll res = c == '/' ? cur/div : cur*div;
                cur = res;
                i = j - 1;
            }
        }
        return sum;
    }
};
