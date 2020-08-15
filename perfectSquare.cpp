class Solution {
public:
    int numSquares(int n) {
        int a[n+1];
        for(int i=0;i<=n;i++)
        {
            a[i] = i;
        }
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j*j<=i;j++)
            {
                a[i] = min(a[i],1+a[i-j*j]);
            }
        }
        return a[n];
    }
};
