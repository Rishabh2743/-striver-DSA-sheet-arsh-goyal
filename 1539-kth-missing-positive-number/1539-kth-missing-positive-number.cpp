class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int a=0;
        for(int i=1;i<=2000;i++)
        {
            if(a<arr.size()&& i==arr[a])
                a++;
            else {
                k--;  
                  if
                      (k==0)
                      return i;}
           
        }
        return 0;
    }
};