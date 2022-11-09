class Solution {
public:
    string largestOddNumber(string num) {
         int i=num.length()-1;
        while(!num.empty())
        {
            if(num[i]%2==1)
                return num;
            else
                num.pop_back();
            i--;
        }
        return num;
    }
};
