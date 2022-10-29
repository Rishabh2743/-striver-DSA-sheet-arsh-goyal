class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long long>s;
        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" && tokens[i]!="-"  &&tokens[i]!="*" && tokens[i]!="/" )
            {
                
                int a = stoi(tokens[i]);
              
               s.push(a);
            }else{ 
                long temp1=s.top();
                s.pop();
                long  temp2=s.top();
                s.pop();
            if(tokens[i]=="/"){
              
                s.push(temp2/temp1);
            }
            else if(tokens[i]=="*"){
                
                s.push(temp2 * temp1);
            }
           else if(tokens[i]=="+"){
                
                s.push(temp2+temp1);
            }
           else if(tokens[i]=="-"){
               
                s.push(temp2-temp1);
            }
           
        }
        }
        return s.top();
    }
};