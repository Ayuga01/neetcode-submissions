class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        if(nums.size()==0 or nums.size()==1){
            return false;
        }
        sort(begin(nums), end(nums));
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==nums[i+1]){
                return true;
            }
        }

        return false;
    }
};

        