class Solution {
public:
    int calPoints(vector<string>& operations) {
       stack<int> s;
        for(int i = 0; i < operations.size(); i++)
        {
            string ch = operations[i];
            if(ch == "+")
            {
                int top1 = s.top(); 
                s.pop(); 
                int top2 = s.top();
                s.push(top1); 
                s.push(top1 + top2); 
            }
            else if(ch == "D")
            {
                s.push(2 * s.top()); 
            }
            else if(ch == "C")
            {
                s.pop(); 
            }
            else
            {
                int ele = stoi(ch);
                s.push(ele); 
            }
        }
        int ans = 0;
        
        
        while(!s.empty())
        {
            ans = ans + s.top();
            s.pop();
        }
        return ans;
    }
};
