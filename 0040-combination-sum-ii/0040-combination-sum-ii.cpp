class Solution {
    
public:
   void helper(vector<int>& candidates, int target,int i,vector<vector<int>>& result, vector<int>& current){
    if(target==0){
        result.push_back(current);
        return ;
    }
    if(i==candidates.size() || target<0){
        return;
    }
    
    for(int j=i;j<candidates.size();j++){
        if(j && candidates[j]==candidates[j-1] && j>i){
            continue;
        }
        current.push_back(candidates[j]);
        helper(candidates,target-candidates[j],j+1,result,current);
        current.pop_back();
    }

}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
    sort(candidates.begin(),candidates.end());
    vector<vector<int>> v;
    vector<int> u;
    helper(candidates, target,0,v,u);
    return v;
}
};