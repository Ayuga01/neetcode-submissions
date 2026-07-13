class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>freq;
        for(int num : nums){
            freq[num]++;
        }

        vector<pair<int, int>>ans;
        for(auto& p : freq){
            ans.push_back(make_pair(p.second, p.first));
        }

        sort(rbegin(ans), rend(ans));

        vector<int>res;
        for(int i=0;i<k;i++){
            res.push_back(ans[i].second);
        }

        return res;
    }
};
