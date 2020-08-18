class Solution {
public:
    int reverse(int x) {
        long sol = 0;
        while (x != 0)
        {
            sol = sol * 10 + x % 10;
            x = x / 10;
        }
        if(sol < INT_MIN || sol > INT_MAX)
            return 0;
        else
            return (int)sol;
    }
};
