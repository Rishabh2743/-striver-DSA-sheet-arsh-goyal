class Solution {
 int bsearch(vector<int>& arr, long long target, int mul) {
        int sz = arr.size();
        if( (arr[0]*1LL) *mul  > target)
            return 0;
        if( (arr[sz-1]*1LL) *mul  < target)
            return sz;
        int st = 0, ed = sz-1, idx = sz-1;
        while(st <= ed) {
            int mid = (st + ed)/2;
            if(target <= (arr[mid]*1LL) *mul) {
                idx = mid;
                ed = mid - 1;
            }
            else
                st = mid + 1;
        }
        return idx;
    }

public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        sort(potions.begin(),potions.end());
        int n = spells.size();
        int m = potions.size();
        for(int i=0;i<n;i++) {
            ans.push_back(m - bsearch(potions, success, spells[i]));
        }
        return ans;
    }
};