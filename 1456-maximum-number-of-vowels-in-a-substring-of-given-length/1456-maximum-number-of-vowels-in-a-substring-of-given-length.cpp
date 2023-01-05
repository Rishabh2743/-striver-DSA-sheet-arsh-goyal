class Solution {
public:
    int maxVowels(string s, int k) {
       int count=0;
     int answer=INT_MIN;
     for(auto i=0;i<k;i++)
     {
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' 
        || s[i] =='u')
     {count++;}
     }
     answer=max(answer,count);
     for(auto j=k;j<s.size();j++)
     {
      if(s[j-k]=='a' || s[j-k]=='e' 
     || s[j-k]=='i' || s[j-k]=='o' 
     || s[j-k]=='u')
     {count--;}
     if(s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u')
     {count++;}
     answer=max(answer,count);
     }
     return answer;  
    }
};