class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int s = nums.size();
      if(s==0)
          return 0;

        int dp[s];
        fill(dp,dp+s,1);
        
        int ans=1;
        
        for(int i=1;i<s;i++)
        {
            for(int j=0;j<i;j++)
             if(nums[i]>nums[j])
              dp[i]=max(dp[i],dp[j]+1);
        
           ans=max(dp[i],ans);
        }
       
        return ans;
    }
};
