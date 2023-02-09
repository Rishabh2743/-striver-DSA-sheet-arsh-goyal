class Solution {
public:
    long long distinctNames(vector<string>& ideas) {
     int n = ideas.size();
        unordered_map<char, unordered_set<string> > initialStr;
        for(auto &idea : ideas){
            initialStr[idea[0]-'a'].insert(idea.substr(1,-1));
        }

 
        long long ans = 0;
        for(int i = 0; i < 26; i++){
            auto &setI = initialStr[i];
            if(setI.size() == 0) continue;
            for(int j = i+1; j < 26; j++){
                auto &setJ = initialStr[j];
                if(setJ.size() == 0) continue;

                int same = 0;
                for(auto &str: setI){
                    if(setJ.find(str) != setJ.end())
                        same++;
                }

                ans += (setI.size()-same)*(setJ.size()-same);
            }
        }
        
        // if (A B) is valid, then (B A) is valid as well
        return ans * 2;
    }
};