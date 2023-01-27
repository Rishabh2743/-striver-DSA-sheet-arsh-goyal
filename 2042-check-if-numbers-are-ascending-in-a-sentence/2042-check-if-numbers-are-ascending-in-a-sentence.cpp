class Solution {
public:
    bool areNumbersAscending(string s) {
          int num=INT_MIN;
        string word;
        istringstream iss(s);
        while(iss >> word) {
            if(isdigit(word[0])) {
                int currNum=stoi(word);
                if(currNum > num) {
                    num=currNum;
                } else if(currNum <= num) {
                    return false;
                }
            }
        }
        return true;

    }
};