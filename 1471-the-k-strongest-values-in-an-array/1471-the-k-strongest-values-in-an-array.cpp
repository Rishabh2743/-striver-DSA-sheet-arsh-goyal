class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
         sort(arr.begin(),arr.end());
        int m=arr[(arr.size()-1)/2],i=0,j=arr.size()-1;
        vector<int>ans;
        while(ans.size()<k) {
            if(arr[j]-m>=m-arr[i]) ans.push_back(arr[j--]);
            else ans.push_back(arr[i++]);
        }
        return ans;
    }
};
    