class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
 int mini = INT_MAX;
        int diff = INT_MAX;
        priority_queue<int>pq;

        for(auto i:nums)
        {
            if(i%2 != 0)
                i = i*2;
                
            mini = min(mini,i);
            pq.push(i);
        }

        while(pq.top() %2 == 0)
        {
            int maxi = pq.top();
            diff = min(diff,maxi-mini);
            mini = min(mini,maxi/2);
            pq.pop();
            pq.push(maxi/2);
        }
        return min(diff,pq.top()-mini);
    }
};