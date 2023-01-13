class Solution {
public:
    int longestPath(vector<int>& parent, string s) {
        unordered_map<int, vector<int>> map;
        for(int i=1; i<s.size(); i++)
            map[parent[i]].push_back(i);
        int maxN = 0;
        findNodeMaxPath(map, s, 0, maxN);
        return maxN;
    }
    int findNodeMaxPath(unordered_map<int, vector<int>>& map, string& s, int node, int& maxN)
    {
        int largest = 0, second = 0;
        for(auto p : map[node]){
            int subMaxPath = findNodeMaxPath(map, s, p, maxN);
            if(s[node] == s[p]) continue;
            if(subMaxPath >= largest){
                second = largest;
               largest = subMaxPath;
            }else
                second = max(second, subMaxPath);
        }
        maxN = max(maxN, 1 + largest + second);
        return 1 + largest;
    } 
    
};