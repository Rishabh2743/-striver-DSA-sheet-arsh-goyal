class Solution {
public:
bool count(vector<int>& weights, int days, int capacity){
        int sm=0, day=0;
        for(int i=0;i<weights.size();i++){
            if(weights[i]+sm<=capacity)
                sm += weights[i];
            else{
                sm=0;
                sm += weights[i];
                day++;
            }
        }
        if(sm>0)
            day++;
        return day<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int start = *max_element(weights.begin(), weights.end()),
        end = accumulate(weights.begin(), weights.end(), 0);
        int minCap=0;
        
        while(start<=end){
            int mid = start + (end-start)/2;
            if(count(weights, days, mid)){
                minCap = mid;
                end = mid-1;
            }
            else
                start = mid+1;
        }
        return minCap;
    }
};