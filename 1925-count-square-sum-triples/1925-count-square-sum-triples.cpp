class Solution {
public:
    int countTriples(int n) {
         int count=0;
      
       for(int i=1;i<n;i++) 
       {
          for(int j=1;j<n;j++)
          {  
            int sum=(i*i)+(j*j);
            int temp=sqrt(sum);
            if(temp*temp==sum && temp<=n)
            {
                count++;
            }
          }
          
        }
       return count;
    } 
};
    