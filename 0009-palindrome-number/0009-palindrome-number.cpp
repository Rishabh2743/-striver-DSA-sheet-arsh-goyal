class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0 || x%10 ==0 && x!=0){
           return false;
       }
        int p=0;
        while(p<x){
            p= p *10 + x%10 ;
            x=x/10;
        }
        
        return p==x || p/10==x;
    }
};