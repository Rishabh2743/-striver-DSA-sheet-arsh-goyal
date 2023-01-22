class Solution {
public:
   bool isvalid(string s){
       if(s.size()==1){
           return true;
       }
       int st=0,en=s.size()-1;
       while(st<=en){
           if(s[st]!=s[en]){
               return false;
           }
           st++;
           en--;
       }
       return true;
   }

     void f(string s,int i,vector<string>& temp,vector<vector<string>>& ans){
         if(i==s.size()){
             ans.push_back(temp);
             return ;
         }
         string t="";
         for(int k=i;k<s.size();k++){
             t=t+s[k];
             if(isvalid(t)){
                 temp.push_back(t);
                 f(s,k+1,temp,ans);
                 temp.pop_back();
             }
         }
     }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        f(s,0,temp,ans);
        return ans;
    }
};