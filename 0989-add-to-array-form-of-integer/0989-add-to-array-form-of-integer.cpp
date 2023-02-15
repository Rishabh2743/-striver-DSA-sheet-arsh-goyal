class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        vector<int>v;
        int n = num.size();
        for(int i=n-1;i>=0;i--){
            k += num[i];
            v.push_back(k%10);
            k /= 10;
        }
        while(k){
            v.push_back(k%10);
            k /= 10;
        }
        reverse(v.begin(), v.end());
        return v;
    }
};
    