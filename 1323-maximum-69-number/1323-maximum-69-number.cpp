class Solution {
public:
    int maximum69Number (int num) {
        string res;
        while(num > 0)
        {
            res += (num % 10 + '0');
            num /= 10;
        }
        reverse(res.begin(), res.end());
        for(int i = 0; i < res.size(); i++)
        {
            if(res[i] == '6')
            {
                res[i] = '9';
                break;
            }
        }
        return stoi(res);
    }
};