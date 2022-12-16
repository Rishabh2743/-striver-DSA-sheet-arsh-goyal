class Solution {
public:
    bool isThree(int n) {
        int count=1;
        for(int i=2;i<=n;i++){
            if(n%i==0){
                count++;
            }
            if(count==4){
                return false;
            }
        }
        return (count==3);
        
    }
};