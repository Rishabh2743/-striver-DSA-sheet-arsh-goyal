//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++

class Solution{   
public:
bool check(int sum,vector<int>&arr,int i,vector<vector<int>>&dp){
     if(sum==0)
        return true;
    
    if(i == 0)
        return arr[0] == sum;
    
    if(dp[i][sum]!=-1)
        return dp[i][sum];
        
    bool notTaken = check(sum,arr,i-1,dp);
    
    bool taken = false;
    if(arr[i]<=sum)
        taken = check(sum-arr[i],arr,i-1,dp);
        
    return dp[i][sum]= notTaken||taken;
}
    bool isSubsetSum(vector<int>arr, int sum){
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
      return check(sum,arr,n-1,dp);
        
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