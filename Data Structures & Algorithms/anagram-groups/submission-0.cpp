class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string, vector<string>>mp;
        
        for(auto& s : strs){
            string sortedStr = s;
            sort(begin(sortedStr), end(sortedStr));
            mp[sortedStr].push_back(s); 
        }

        for(auto& res : mp){
            ans.push_back(res.second);
        }

        return ans;
    }
};
