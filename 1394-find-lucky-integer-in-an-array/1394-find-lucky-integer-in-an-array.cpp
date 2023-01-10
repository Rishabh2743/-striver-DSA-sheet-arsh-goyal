class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int>p;
        for(int i=0;i<arr.size();i++){
            p[arr[i]]++;
        }
       int  ans=-1;
        for(auto it :arr){
            if(p[it]==it){
                ans=max(ans,it);
            }
        }
        return ans;
    }
};