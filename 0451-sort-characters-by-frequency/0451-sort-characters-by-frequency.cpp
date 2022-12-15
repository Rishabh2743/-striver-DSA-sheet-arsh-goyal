class Solution {
public:
    static bool cmp(pair<char,int>&a, pair<char,int>&b){
        return a.second > b.second;
    }
    
    string frequencySort(string s) {
        string res = "";
        unordered_map<char,int>p;
        for(int i = 0 ; i < s.length(); i++){
            p[s[i]]++;
        }
        vector <pair<char, int>> ap;
        for(auto it : p){
            ap.push_back(it);
        }
        sort(ap.begin(), ap.end(), cmp);
        
        for(auto i : ap){
            while(i.second > 0){
                res += i.first;
                i.second--;
            }
        }
        
        return res;
    }
};