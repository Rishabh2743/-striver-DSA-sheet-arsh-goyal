class Solution {
public:
   bool canBeCompleted(vector<int>&time,int totalTrips, long long timeAllowed){
        long long count = 0;
        for(auto it : time){

            count += ((long long)timeAllowed)/(long long)it;
            if(count >= totalTrips)
            return true;
        }
        return false;
    }
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long minTime = 1;
        long long maxTime = 1000000000000000;

        while(minTime < maxTime){
            long long mid = (minTime + maxTime)/2;

            if(canBeCompleted(time,totalTrips, mid)){
                maxTime = mid;
            }else{
                minTime = mid + 1;
            }
        }
        return minTime;
    }
};