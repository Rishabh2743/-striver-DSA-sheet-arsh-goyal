class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
         vector<int>ans;
        set<int>st;
        unordered_map<int,int>m;
        for(auto x:arr)
            st.insert(x);

        int c=0;
        for(auto x:st)
        {
            c++;
            m[x]=c;
        }    
        for(auto x:arr)
            ans.push_back(m[x]);

         return ans;   

    }
};
    