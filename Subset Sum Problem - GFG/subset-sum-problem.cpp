//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<bool>>dp(n,vector<bool>(sum+1,false));
        dp[0][arr[0]]=true;
        for(int i=1;i<n;i++){
            for(int tar=0;tar<=sum;tar++){
                     
               bool notTaken = dp[i-1][tar];
    
                 bool taken = false;
                  if(arr[i]<=tar) taken = dp[i-1][tar-arr[i]];
                
                dp[i][tar]= notTaken||taken;
            }
        }
      return dp[n-1][sum];
        
        // code here 
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N, sum;
        cin >> N;
        vector<int> arr(N);
        for(int i = 0; i < N; i++){
            cin >> arr[i];
        }
        cin >> sum;
        
        Solution ob;
        cout << ob.isSubsetSum(arr, sum) << endl;
    }
    return 0; 
} 

// } Driver Code Ends