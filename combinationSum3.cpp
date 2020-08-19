class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int> >ans;
        vector<int> tem;
        dfs(k,n,1,tem,ans);
        return ans;
    }
    
private:
    void dfs(int k,int n,int i,vector<int>& tem,vector<vector<int> >& ans){
        if(k == 0 && n == 0){
            ans.push_back(tem);
            return;
        }
        if(k == 0 && n > 0) 
            return;
        for(int j = i;j <= 9;++j){
            tem.push_back(j);
            dfs(k - 1,n - j,j + 1,tem,ans);
            tem.pop_back();
        }
        return;
    }
};
