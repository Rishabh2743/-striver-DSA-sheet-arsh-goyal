class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
      unordered_map<int, int> mp;  
        for (int i = 0; i < matches.size(); i++) {
            mp[matches[i][0]] = 0; 
        }
        for (int i = 0; i < matches.size(); i++) {
            mp[matches[i][1]]++;
        }
        vector<vector<int>> ans;
        vector<int> zeroLose, oneLose;
        for (auto i : mp) {
            if (!i.second) zeroLose.push_back(i.first);
            else if (i.second == 1) oneLose.push_back(i.first);
        }
        sort(zeroLose.begin(), zeroLose.end());
        sort(oneLose.begin(), oneLose.end());
        ans.push_back(zeroLose);
        ans.push_back(oneLose);
        return ans;
    }
};