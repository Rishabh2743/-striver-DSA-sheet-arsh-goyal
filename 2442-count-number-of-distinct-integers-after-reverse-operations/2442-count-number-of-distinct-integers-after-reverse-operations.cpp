class Solution {
public:
    int rev(int n){
        int r=0;
        while(n!=0){
            int temp=n%10;
            r=r*10 + temp;
            n=n/10;
        }
        return r;
    }
    int countDistinctIntegers(vector<int>& nums) {
        set<int>s;
        for(int i=0;i<nums.size();i++){
            s.insert(nums[i]);
            int temp=rev(nums[i]);
            s.insert(temp);
        }
        return s.size();
    }
};