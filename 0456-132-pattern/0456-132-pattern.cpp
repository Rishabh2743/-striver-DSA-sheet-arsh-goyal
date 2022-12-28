class Solution {
public:
    bool find132pattern(vector<int>& nums) {
         stack<int>s;
        int thirdelement=INT_MIN;
        int curr=0;
        int c=0;
        for(int i=nums.size()-1;i>=0;i--)
        {
            curr=nums[i];
            
            if(curr<thirdelement)
            {
                return true;
            }
           else while(!s.empty() && s.top()<curr)
            {
                thirdelement=s.top();
                s.pop();
                
            }
            s.push(curr);
        }
        return false;
    }
};