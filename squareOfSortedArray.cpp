class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        transform(A.begin(),A.end(),A.begin(),[](int i)-> int{return i*i;});
        sort(A.begin(),A.end());
        return A;
    }
};
