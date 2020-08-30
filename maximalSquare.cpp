class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int m=matrix.size();
        if(m==0) 
            return 0;
        int n=matrix[0].size();
        vector<vector<int>> dp(m+1,vector<int>(n+1));
        for(int i=0;i<n;i++){
            dp[0][i]=matrix[0][i]-'0';
        }
        for(int i=0;i<m;i++){
            dp[i][0]=matrix[i][0]-'0';
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=1+min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
        int answer=INT_MIN;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                answer=max(answer,dp[i][j]*dp[i][j]);
            }
        }
        return answer;
    }
};