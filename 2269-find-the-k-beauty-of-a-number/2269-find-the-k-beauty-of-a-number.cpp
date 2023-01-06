class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s=to_string(num);
        int ans=0;
        string t="";
        for(int i=0;i<k;i++){
            t+=s[i];
        }
        if(stoi(t)!=0 && num%stoi(t)==0){
            ans++;
        }
        for(int i=k;i<s.size();i++){
            t.erase(0,1);
            t+=s[i];
            int temp=stoi(t);
             if(stoi(t)!=0 && num%stoi(t)==0){
                 ans++;
             }
            
        }
        return ans;
    }
};