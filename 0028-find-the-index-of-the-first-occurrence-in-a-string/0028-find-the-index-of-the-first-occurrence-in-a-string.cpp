class Solution {
public:
    int strStr(string haystack, string needle) {
       int n=needle.size();
        string s="";
        for(int i=0;i<n;i++){
            s+=haystack[i];
        }
        if(needle==s){
            return 0;
        }
        for(int i=n;i<haystack.size();i++){
            s.erase(0,1);
            
             s+=haystack[i];
            cout<<s<<" ";
              if(needle==s){
                return (i-n+1);
           }
        }
        return -1;
    }
};