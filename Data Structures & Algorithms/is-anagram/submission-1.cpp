class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
        return false;

        unordered_map<int, int>countS;
        unordered_map<int, int>countT;

        for(int i=0;i<s.size();i++){
            countS[s[i]]++;
            countT[t[i]]++;
        }

        if(countS == countT){
            return true;
        }

        return false;

    }
};
