class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       vector<int>ve(nums.size()) ;
        int pi=0,i2=1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>0){
            ve[pi]=nums[i];
            pi=pi+2;
        }
         else {
             ve[i2]=nums[i];
             i2=i2+2;
         }
    }
    return ve;
}
};
