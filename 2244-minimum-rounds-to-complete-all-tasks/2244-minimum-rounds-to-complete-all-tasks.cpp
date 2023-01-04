class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
         unordered_map<int, int> mp;
        for(int x : tasks)
            mp[x]++;
        int res = 0;
        for(auto it : mp)
        {
            if(it.second == 1) return -1;
            res += it.second / 3;
            if(it.second % 3 != 0) res += 1;
        }
        return res;
    }
};
    