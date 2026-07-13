class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>q(stones.begin(), stones.end());

        int first,second;
        while(q.size()>1){
            first=q.top();
            q.pop();
            second=q.top();
            q.pop();
            int rem = first-second;
        
            q.push(rem);
        }

        return q.top();
        
    }
};
