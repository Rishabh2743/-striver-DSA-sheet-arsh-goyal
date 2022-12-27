class Solution {
public:
    int countAsterisks(string s) {
          int count1 = 0, count2 = 0;
        for(char& ch : s){
            if(ch == '|' )
              count1++;
            else if(count1%2 == 0 && ch == '*')
             count2++;
        }
        return count2;
        
    }
};
    