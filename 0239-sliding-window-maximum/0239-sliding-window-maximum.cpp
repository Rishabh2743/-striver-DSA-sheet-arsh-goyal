class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& a, int k) {
       vector<int>ans ;
       deque<int>q ;
       int i = 0 , j =0 , n= a.size() ;
       while(j<n){
           while(!q.empty() and a[j]>q.back())q.pop_back();
           q.push_back(a[j]) ;
           if(j-i+1<k) j++ ;
           else{
               ans.push_back(q.front());
               if(q.front()==a[i])q.pop_front();
               i++;
               j++ ;
           }
           
       }
       return ans ;
    }
};
