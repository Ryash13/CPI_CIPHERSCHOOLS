class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> umap;
        for(int t: nums)
        {
            if(umap.find(t) != umap.end())
                umap[t] += 1;
            else
                umap[t] = 1;
        }
        vector<tuple<int , int>> res;
        for(auto t: umap)
        {
            res.push_back(make_tuple(t.second,t.first));
        }
        sort(res.begin(),res.end(),[](auto const &t1 , auto const &t2) {return get<0>(t1) > get<0>(t2);});
        vector<int> answer;
        for(int i=0; i<k; i++)
        {
            answer.push_back(get<1>(res[i]));
        }
        return answer;
    }
};
