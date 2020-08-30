class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int s = coins.size();
        if(amount==0)
            return 0;
        int arr[amount+1];
        for(int i{}; i<amount+1; i++){
            arr[i] = 0;
        }
        arr[0] = 0;
        for(int i = 1; i<amount+1; i++){
            int minimum = INT_MAX;
            for(int j=0; j<s; j++){
                if(i>coins[j]){
                    if(arr[i-coins[j]]>0 && arr[ i-coins[j] ] <minimum){
                        minimum = arr[i-coins[j]];
                        arr[i]= minimum+1;
                    }
                }
                else if(i==coins[j])
                    arr[i] =1;
            }
            
        }
        if(arr[amount]==0)
            return -1;
        return arr[amount];
    }
};
