//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
vector<string> AllParenthesis(int n) ;


// } Driver Code Ends
//User function Template for C++

// N is the number of pairs of parentheses
// Return list of all combinations of balanced parantheses
class Solution
{
     public:
     void generate(vector<string>&ans, string p, int n, int m){
        if(n ==0 and m ==0){
            ans.push_back(p);
            return;
        }
        
        if(n > 0)
            generate(ans, p + '(', n-1, m+1);
        if(m > 0)
            generate(ans, p + ')', n, m-1); 
    }
   
    vector<string> AllParenthesis(int n) 
    {
         vector<string> ans;
        string p = "";
        generate(ans,p,n,0);
        return ans;
        // Your code goes here 
    }
};

//{ Driver Code Starts.


int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		Solution ob;
		vector<string> result = ob.AllParenthesis(n); 
		sort(result.begin(),result.end());
		for (int i = 0; i < result.size(); ++i)
			cout<<result[i]<<"\n";
	}
	return 0; 
} 

// } Driver Code Ends