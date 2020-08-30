class Solution {
public:
    int climbStairs(int n) {
        long long int s1 = 1;
        long long int s2 = 1;
        while(n--)
            s1 = (s2 += s1) - s1;
    return s1;
    }
};
