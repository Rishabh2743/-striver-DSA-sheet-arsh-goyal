class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        map<int,string>s;
    for(int i=0;i<heights.size();i++)
        s[heights[i]]=names[i];
    int n=heights.size(),i=1;
    for (auto itr : s)
    {
        names[n-i]=itr.second;i+=1;
    }   
    return names;
}
};