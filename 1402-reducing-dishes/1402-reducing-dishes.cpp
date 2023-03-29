class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        // if al are negative return 0;
        if(satisfaction[satisfaction.size()-1] <0) return 0;

        int val = 0,ind=0,cnt=1,total=0;
        
        //finding the index where non-negative elements start in the sorted array and computing its answer.
        while(satisfaction[ind]<0) ind++;
        for(int i=ind;i<satisfaction.size();i++){
            val += cnt*satisfaction[i];
            total += satisfaction[i];
            cnt++;
        }


        int maxi = val,i=ind-1,ans=maxi,sum=0;

        //Adding elements one by one and updating answer and finally return max anwser.
        while(i>=0){
            int new_sum = maxi + total  + satisfaction[i];
            maxi = new_sum;
            total += satisfaction[i];
            if(maxi>ans) ans=maxi;
            sum += satisfaction[i];
            i--;
        }
        if(maxi>ans) ans=maxi;
        return ans;
    }
};