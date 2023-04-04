class Solution {
public:
    int partitionString(string s) {
     unordered_map<char, int>p; 
        int count=1;    

        for(auto i : s){
            if(p.find(i) != p.end()){  
                p.clear();
                count++;
            }
            p[i]++;     
        }
        return count;
    }
};