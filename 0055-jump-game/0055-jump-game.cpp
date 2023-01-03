class Solution {
public:
    bool canJump(vector<int>& n) {
        int a=0;
        for(int i=0; i<n.size(); i++){
            if(i>a) 
                return false; 
             a=max(a,i+n[i]);
        } 
       return true;  
    }
        
};