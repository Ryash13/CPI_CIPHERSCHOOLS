class Solution {
public:
    string countAndSay(int n) {
        string s[30];
        s[0]="1";
        s[1]="11";
        for(int i=2;i<n;i++){
            s[i]="";
            for(int j=0;j<s[i-1].size();j++){
                int cnt=1;
                int now=j;
                while(j+1<s[i-1].size()&&s[i-1][j]==s[i-1][j+1])cnt++,j++;
                // cout<<cnt<<endl;
                s[i]+=to_string(cnt)+s[i-1][now];
            }
            cout<<s[i]<<endl;
        }
        return s[n-1];
    }
};
