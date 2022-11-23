class Solution {
public:
    void combo(int i,int target,vector<int>&c,vector<vector<int>>&ans,vector<int>&v){
        //base
        if(i==c.size()){
            if(target==0){
                ans.push_back(v);
            }
            return;
        }
       //not take
        combo(i+1,target,c,ans,v);
        //take
        if(c[i]<=target){
            v.push_back(c[i]);
             combo(i,target-c[i],c,ans,v);
            v.pop_back();
            
        }
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans;
        vector<int>v;
        combo(0,target,candidates,ans,v);
         return ans;
        
        
    }
};