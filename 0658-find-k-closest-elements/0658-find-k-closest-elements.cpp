class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        vector<int> soln;
       int sum = 0,pt = 0;
       for(int i=0;i<k;i++){
           sum += abs(arr[i]-x); 
       }
       int temp = sum;
       for(int i=k;i<arr.size();i++){
           sum -= abs(arr[i-k]-x);
           sum += abs(arr[i]-x);
           if(sum<temp){
               temp = sum;
               pt = i-k+1;
           }
       }
       while(k--) soln.push_back(arr[pt++]);
       return soln;
    }
};
    