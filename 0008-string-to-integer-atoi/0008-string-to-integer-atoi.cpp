class Solution {
public:
    int myAtoi(string s) {
        bool num_pos= true  ; 
        long i=0,sum=0; 
        while(s[i]==' '){
            i++;
        }
        int val=i;
        
        if(s[i]=='-'){
        num_pos= false;
        i++;}
        else if(s[i]=='+'){
            if(i>val+1)
            return 0; 
        num_pos= true;
        i++;}
        

        while('0'<=s[i]&& s[i]<='9'){
            if((sum>INT_MAX/10 || sum==INT_MAX/10&&s[i]-48>7)&&num_pos)
            return pow(2,31)-1;
            else if((sum>INT_MAX/10 || sum==INT_MAX/10&&s[i]-48>8)&&!num_pos)
            return -pow(2,31);
            sum*=10;
            sum+=s[i]-48;
            i++;
            }
        
        if(num_pos)
        return sum;

        return sum*(-1);
    }
};